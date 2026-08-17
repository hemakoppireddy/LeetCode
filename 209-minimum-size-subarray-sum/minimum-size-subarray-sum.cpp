class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minSize = INT_MAX;
        int i=0, j=0, sum=0;
        while(i<n) {
            sum+=nums[i];
            while(sum>=target && j<=i) {
                minSize = min(minSize, i-j+1);
                sum-=nums[j];
                j++;
            }
            i++;
        }
        if(minSize==INT_MAX) return 0;
        return minSize;
    }
};