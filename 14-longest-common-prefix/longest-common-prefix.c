int min_length(char** strs, int n){
    int min = strlen(strs[0]);
    for(int i=0;i<n;i++){
        int len = strlen(strs[i]);
        if(len<min) min = len;
    }
    return min;
}
char* longestCommonPrefix(char** strs, int strsSize) {
    int minlen = min_length(strs, strsSize);
    static char ans[201];
    int index = 0;
    for(int i=0;i<minlen;i++){
        char ch = strs[0][i];
        for(int j=1;j<strsSize;j++){
            if(strs[j][i]!=ch){
                ans[index] = '\0';
                return ans;
            }
        }
        ans[index++] = ch;
    }
    ans[index] = '\0';
    return ans;
}