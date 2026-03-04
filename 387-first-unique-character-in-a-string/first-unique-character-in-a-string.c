int firstUniqChar(char* s) {
    int frq[26]={0};
    int length=strlen(s);
    for(int i=0;i<length;i++){
       frq[s[i]-'a']++;
    }
    for(int i=0;i<length;i++){
        if(frq[s[i]-'a']==1){
            return i;
        }
    }
    return -1;
}