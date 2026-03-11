class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left=0, right=0, maxCount=0;
        int zero=0;
        while(right<n) {
            if(nums[right]==0){
                zero++;
            }
            while(zero>1) {
                if(nums[left]==0) zero--;
                left++;
            }
            maxCount = max(maxCount, right-left);
            right++;
        }
        return maxCount;
    }
};