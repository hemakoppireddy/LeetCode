class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        int m = nums.size();
        vector<int> res;
        for(int i=0; i<n; i++){
            nums[queries[i][1]] += queries[i][0];
            int sum=0;
            for(int k=0; k<m; k++){
                if(nums[k]%2==0){
                    sum+=nums[k];
                }
            }
            res.push_back(sum);
        }
        return res;
    }
};