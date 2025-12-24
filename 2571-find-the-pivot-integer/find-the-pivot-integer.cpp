class Solution {
public:
    int pivotInteger(int n) {
        int total=0;
        for(int i=1; i<=n; i++) {
            total+=i;
        }
        int left = 0, right=total;
        for(int i=1; i<=n; i++) {
            left +=i;
            right -= (i-1);
            if(left == right) return i;
        }
        return -1;
    }
};