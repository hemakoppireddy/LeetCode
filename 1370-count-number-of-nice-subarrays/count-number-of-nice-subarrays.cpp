class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1; 
        int prefixSum = 0;
        int result = 0;
        for (int num : nums) {
            prefixSum += (num % 2);
            if (prefixCount.count(prefixSum - k)) {
                result += prefixCount[prefixSum - k];
            }
            prefixCount[prefixSum]++;
        }
        return result;
    }
};