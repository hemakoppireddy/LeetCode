class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> pr(n, vector<int>(2, -1));
        for(int i=0; i<n; i++) {
            int count=0;
            for(int j=0; j<m; j++) {
                if(mat[i][j]==1) count++;
            }
            pr[i][0]=count;
            pr[i][1]=i;
        }
        sort(pr.begin(), pr.end());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(pr[i][1]);
        }
        return res;
    }
};