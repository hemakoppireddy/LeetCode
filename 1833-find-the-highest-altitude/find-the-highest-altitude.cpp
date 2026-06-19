class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int presum=0, maxsum=0;
        for(int i=0; i<n; i++) {
            presum+=gain[i];
            maxsum = max(maxsum, presum);
        }
        return maxsum;
    }
};