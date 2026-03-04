class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<vector<int>> res(2);
        for(int x : s1) {
            if(s2.find(x)==s2.end()){
                res[0].push_back(x);
            }
        }
        for(int x : s2) {
            if(s1.find(x)==s1.end()) {
                res[1].push_back(x);
            }
        }
        return res;
    }
};