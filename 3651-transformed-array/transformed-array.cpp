class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i=0;i<n;i++) {
            if(nums[i]==0){
                res.push_back(0);
                continue;
            }
            int x = (nums[i]+i)%n;
            if(x<0) x+=n;
            res.push_back(nums[x]);
            
        }
        return res;
        
    }
};