class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> premap;
        int ans=0, sum=0;
        for(int i=0; i<n; i++) {
            sum = (((sum+nums[i])%k)+k)%k;
            if(sum==0) ans++;
            ans+=premap[sum];
            premap[sum]+=1;
        }
        return ans;
    }
};