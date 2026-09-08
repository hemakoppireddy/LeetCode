class Solution {
public:
    string decodeString(string s) {
        int n = s.length();
        stack<char> st;
        for(int i=0; i<n; i++) {
            if(isdigit(s[i]) || isalpha(s[i]) || s[i]=='[') {
                st.push(s[i]);
            }
            if(s[i]==']') {
                string temp="";
                while(st.top()!='[') {
                    char ch = st.top();
                    temp+=ch;
                    st.pop();
                }
                reverse(temp.begin(), temp.end());
                // cout << temp << endl;
                st.pop();
                string num = "";
                while(!st.empty() && isdigit(st.top())) {
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                int k = stoi(num);
                string repeated = "";
                while(k--) {
                    repeated+=temp;
                }
                for(char ch: repeated) {
                    st.push(ch);
                }
            }
        }
        string res = "";
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};