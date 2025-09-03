class Solution {
public:
    int reverseBits(int n) {
        unsigned int num = static_cast<unsigned int>(n);
        unsigned int ans = 0;
        for(int i=0; i<32; i++) {
            ans <<= 1;
            ans |= (num & 1);
            num >>= 1;
        }
        return static_cast<int>(ans);
    }
};