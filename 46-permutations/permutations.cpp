class Solution {
public:
    void allPermutations(vector<int>& nums, vector<int>& ds, vector<int>& picked, vector<vector<int>>& res) {
        if(ds.size()==nums.size()) {
            res.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size(); i++) {
            if(!picked[i]) {
                picked[i]=1;
                ds.push_back(nums[i]);
                allPermutations(nums, ds, picked, res);
                picked[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> ds;
        vector<int> picked(n, 0);
        vector<vector<int>> res;
        allPermutations(nums, ds, picked, res);
        return res;
    }
};