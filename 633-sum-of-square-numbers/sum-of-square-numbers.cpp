class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i, j;
        // int root = sqrt(c);
        // for(i=0; i<=root; i++) {
        //     for(j=0; j<=root/2+1; j++) {
        //         long long sum = i*i + j*j;
        //         if(sum == c) return true;
        //     }
        // }
        // return false;
        int root = sqrt(c);
        long long start=0, end=root;
        while(start<=end) {
            long long sum = (start*start)+(end*end);
            if(sum==c) return true;
            else if(sum>c) end--;
            else start++;
        }
        return false;
    }
};