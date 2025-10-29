class Solution {
public:
    int smallestNumber(int n) {
        int b = 1;
        while (b < n) {
            b = (b << 1) | 1; 
        }
        return b;
    }
};