class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> row(n);
        for(int i=0; i<n; i++) {
            int row1=0;
            for(int j=0; j<m; j++) {
                if(mat[i][j]==1) row1++;
            }
            row[i] = row1;
        }
        vector<int> col(m);
        for(int j=0; j<m; j++) {
            int col1=0;
            for(int i=0; i<n; i++) {
                if(mat[i][j]==1) col1++;
            }
            col[j] = col1;
        }
        int count=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j]==1) {
                    if(row[i]==1 && col[j]==1) count++;
                }
            }
        }
        return count;
    }
};