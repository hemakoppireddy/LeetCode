class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k = k%len;
        reverse(nums.begin(), nums.end());
        int start = 0;
        int end = k-1;
        while (start < end) {
            std::swap(nums[start],nums[end]);
            start++;
            end--;
        }
        start = k;
        end = len-1;
        while (start < end) {
            std::swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
};