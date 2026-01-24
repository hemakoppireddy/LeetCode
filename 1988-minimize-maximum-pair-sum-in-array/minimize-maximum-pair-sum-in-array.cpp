class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int j=n-1, maxi = INT_MIN;
        for(int i=0; i<j; i++) {
            int sum = nums[i]+nums[j];
            maxi = max(maxi, sum);
            j--;
        }
        return maxi;
    }
};