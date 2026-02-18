class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};
        auto lb = lower_bound(nums.begin(), nums.end(), target);
        if (lb == nums.end() || *lb != target) {
            return res;
        }
        auto ub = upper_bound(nums.begin(), nums.end(), target);
        res[0] = distance(nums.begin(), lb);
        res[1] = distance(nums.begin(), ub) - 1;

        return res;
    }
};
