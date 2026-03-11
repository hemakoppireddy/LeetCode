class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0, right=0, zero=0, maxCount=0;
        while(right<n) {
            if(nums[right]==0) zero++;
            while(zero > k) {
                if(nums[left]==0) zero--;
                left++;
            }
            maxCount = max(maxCount, right-left+1);
            right++;
        }
        return maxCount;
    }
};