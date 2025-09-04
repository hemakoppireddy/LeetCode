class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> vec;
        for(int i=0;i<nums.size();i++) {
            if(vec.count(nums[i])) return true;
            vec.insert(nums[i]);
            if(vec.size() > k) {
                vec.erase(nums[i-k]);
            }
        }
        return false;
    }
};