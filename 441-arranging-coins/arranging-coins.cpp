class Solution {
public:
    int arrangeCoins(int n) {
        int r=1, ans=0;
        while(n>=r) {
            n-=r;
            ans++;
            r++;
        }
        return ans;
    }
};