class Solution {
public:
    bool isValidWindow(vector<int>& nums, int mid, int k) {
        long long windowSum=0, total=0;
        for(int i=0; i<mid; i++) {
            windowSum+=nums[i];
        }
        total = 1LL*nums[mid-1]*mid;
        if(total-windowSum<=k) return true;
        int j=0;
        for(int i=mid; i<nums.size(); i++) {
            windowSum-=nums[j];
            windowSum+=nums[i];
            total = 1LL*nums[i]*mid;
            if(total-windowSum<=k) return true;
            j++;
        }
        return false;
    }
    int maxFrequency(vector<int>& nums, int k) {
        int low=1, high=nums.size();
        int ans=0;
        sort(nums.begin(), nums.end());
        while(low<=high) {
            int mid = low+(high-low)/2;
            if(isValidWindow(nums, mid, k)) {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};