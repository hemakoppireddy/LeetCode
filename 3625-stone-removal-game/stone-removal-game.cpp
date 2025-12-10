class Solution {
public:
    bool canAliceWin(int n) {
        int i=10, count=0;
        while(n>0 && n>=i){
            n-=i;
            i--;
            count++;
        }
        if(count%2==1) return true;
        return false;
    }
};