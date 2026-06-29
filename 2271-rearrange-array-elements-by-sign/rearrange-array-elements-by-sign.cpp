class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<n; i++) {
            if(nums[i]>0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        for(int i=0; i<n-1; i+=2) {
            nums[i]=pos[i/2];
            nums[i+1]=neg[i/2];
        }
        return nums;
    }
};