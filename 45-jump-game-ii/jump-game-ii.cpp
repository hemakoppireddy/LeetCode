class Solution {
public:
    // int minjump(int i, vector<int>& nums, int jumps) {

    //     if(i>=nums.size()-1) return jumps;
    //     int mini = INT_MAX;
    //     for(int j=1; j<=nums[i]; j++) {
    //         mini = min(mini, minjump(i+j,nums,jumps+1));
    //     }
    //     return mini;
    // } 
    int jump(vector<int>& nums) {
        int jump=0,l=0, r=0;
        int n=nums.size();
        int mxi=0;
        while(r<n-1){
            for(int i=l; i<=r; i++) {
                mxi = max(mxi, i+nums[i]);
            }     
            l=r+1;
            r=mxi;
            jump++;
        }
        return jump;
    }

};