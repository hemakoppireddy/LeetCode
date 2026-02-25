class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int l = 0, h = n-1;
        while(l<=h) {
            int mid = (l+h)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) {
                return mid;
            }
            else if(nums[l]<nums[l+1]){
                l++;
            }
            else if(nums[h]<nums[h-1]){
                h--;
            }
            else return l;
        } 
        return -1;
    }
};