class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double avg;
        double sum=0;
        for(int i=0; i<k; i++) {
            sum+=nums[i];
        }
        double max_avg = sum/k;
        int j=k, i=0;
        while(j<n) {
            sum-=nums[i];
            sum+=nums[j];
            avg = sum/k;
            max_avg = max(max_avg, avg);
            i++;j++;
        }
        return max_avg;
    }
};