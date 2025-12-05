class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int Tsum=0;
        for(int i=0;i<n;i++){
            Tsum+=nums[i];
        }
        int count=0, Fsum=0, Ssum=0;
        for(int i=0; i<n-1; i++){
            Fsum +=nums[i];
            Ssum = (Tsum-Fsum);
            if((Fsum-Ssum)%2==0) count++;
        }
        return count;
    }
};