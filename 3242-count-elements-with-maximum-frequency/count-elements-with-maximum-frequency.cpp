class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> f;
        for (int i : nums) {
            f[i]++;
        }
        int maxi = 0, res=0;
        for (auto& p : f) {
            maxi = max(maxi, p.second);
        }
        for (auto& p : f) {
            if (p.second == maxi) {
                res += p.second;
            }
        }
        return res;
    }
};