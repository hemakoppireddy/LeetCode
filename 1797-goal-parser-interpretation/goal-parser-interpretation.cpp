class Solution {
public:
    string interpret(string command) {
        string res="";
        int n=command.size();
        for(int i=0; i<n; i++) {
            if(command[i]=='G') res+='G';
            else if(command[i]=='(') {
                if(command[i+1]=='a') {
                    res+='a';
                    res+='l';
                }
                else {
                    res+='o';
                }
            }
            else continue;
        }
        return res;
    }
};