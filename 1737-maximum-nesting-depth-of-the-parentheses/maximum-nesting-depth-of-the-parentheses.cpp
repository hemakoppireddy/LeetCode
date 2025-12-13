class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int depth=0, maxdepth=0;
        for(char ch : s) {
            if(ch=='('){
                depth++;
            }
            else if(ch==')') {
                if(depth>maxdepth) maxdepth=depth;
                depth--;
            }
            else continue;
        }
        return maxdepth;
    }
};