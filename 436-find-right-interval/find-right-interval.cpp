class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> a(n, vector<int>(3));
        vector<int> res;
        for(int i=0; i<n; i++){
            a[i][0] = intervals[i][0];
            a[i][1] = intervals[i][1];
            a[i][2] = i;
        }
        sort(a.begin(), a.end());
        // int l=0, r=n-1;
        for(int i=0; i<n; i++) {
            int l=0, r=n-1, flag=0;
            while(l<=r) {
                int mid = (l+r)/2;
                if(a[mid][0]>=intervals[i][1]) {
                    if(mid>0 && a[mid-1][0]<intervals[i][1]) {
                        res.push_back(a[mid][2]);
                        flag=1;break;
                    }
                    else if(mid==0) {
                        res.push_back(a[mid][2]);
                        flag=1;break;
                    }
                    else r = mid-1;
                }
                else if(a[mid][0]<intervals[i][1] ){
                    l=mid+1;
                }
            }
            if(!flag) res.push_back(-1);
        }
        return res;
    }
};