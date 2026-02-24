class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        // int l = 0, r = nums.size() - 1;
        // while (l <= r) {
        //     int mid = l + (r - l) / 2;
        //     if (nums[l] <= nums[mid] && nums[mid+1]<nums[mid]) {
        //         if (nums[l] > nums[r] )
        //             return nums[mid+1];
        //         else
        //             l = mid + 1;
        //     }
        //     else {
        //         if (nums[mid] < nums[r] && nums[mid-1] > nums[r])
        //             return nums[mid];
        //         else
        //             r = mid - 1;
        //     }
        // }
        // return -1;
        if(nums[0]<=nums[n-1]) return nums[0];
        for(int i=0; i<n-1; i++) {
            if(nums[i]>nums[i+1]) return nums[i+1];
        }
        return -1;
    }
};