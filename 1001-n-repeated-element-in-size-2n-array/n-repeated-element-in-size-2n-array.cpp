class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int len = nums.size();
        int n = len/2;
        int count=0;
        for(int i=0; i<len; i++) {
            count=0;
            for(int j=i; j<len; j++){
                if(nums[j]==nums[i]) count++;
                if(count==n) return nums[j];
            }
        }
        return 0;
    }
};