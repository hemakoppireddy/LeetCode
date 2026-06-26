class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n = expression.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*') {
                vector<int> l = diffWaysToCompute(expression.substr(0, i));
                vector<int> r = diffWaysToCompute(expression.substr(i+1));
                for(int a : l) {
                    for(int b : r) {
                        if(expression[i]=='+') ans.push_back(a+b);
                        else if(expression[i]=='-') ans.push_back(a-b);
                        else ans.push_back(a*b);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(expression));
        return ans;
    }
};