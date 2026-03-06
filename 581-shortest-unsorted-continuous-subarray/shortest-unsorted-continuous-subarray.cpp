class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> cpy;
        cpy = nums;
        sort(nums.begin(), nums.end());
        int i=0, j=n-1;
        while(i<n) {
            if(nums[i]==cpy[i]) i++;
            if(nums[j]==cpy[j]) j--;
            else if(nums[i]!=cpy[i] && nums[j]!=cpy[j]){
                return j-i+1;
            }
        }
        return 0;
    }
};