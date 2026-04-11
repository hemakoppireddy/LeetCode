class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < nums.size(); i++) {
            pos[nums[i]].push_back(i);
        }
        int ans = INT_MAX;
        for (auto& p : pos) {
            vector<int>& indices = p.second;
            if (indices.size() >= 3) {
                for (int i = 0; i <= indices.size() - 3; i++) {
                    int dist = 2 * (indices[i + 2] - indices[i]);
                    ans = min(ans, dist);
                }
            }
        }
        return (ans == INT_MAX) ? -1 : ans;
    }
};