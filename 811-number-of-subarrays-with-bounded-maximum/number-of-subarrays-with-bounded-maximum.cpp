class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n = nums.size();
        int i = 0, j = 0, count = 0;
        int lastValid = -1;
        while (j < n) {
            if (nums[j] > right) {
                i = j + 1;
                lastValid = -1;
            }
            else {
                if (nums[j] >= left) {
                    lastValid = j;
                }
                if (lastValid != -1) {
                    count += (lastValid - i + 1);
                }
            }
            j++;
        }
        return count;
    }
};