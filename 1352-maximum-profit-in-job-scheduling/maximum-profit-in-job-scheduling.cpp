class Solution {
public:
    int dpfun(int i, vector<vector<int>>& jobs, vector<int>& dp) {
        if(i>=jobs.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int end = jobs[i][1];
        int l = i+1;
        int r = jobs.size()-1;
        int next = jobs.size();
        while(l<=r) {
            int mid = (l+r)/2;
            if(jobs[mid][0]>=end) {
                next= mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        int pick = jobs[i][2]+dpfun(next, jobs, dp);
        int notpick = dpfun(i+1, jobs, dp);
        return dp[i] = max(pick, notpick);
    }
    
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>> jobs;
        for(int i=0; i<n; i++) {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end());
        vector<int> dp(n, -1);
        return dpfun(0, jobs, dp);
    }
};
