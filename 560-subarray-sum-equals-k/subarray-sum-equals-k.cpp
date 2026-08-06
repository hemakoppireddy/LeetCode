class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        mpp[0]++;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int count=0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            int need = x-k;
            if(mpp.find(need)!=mpp.end()){
                count+=mpp[need];
            }
            mpp[x]++;
        }
        return count;
    }
};