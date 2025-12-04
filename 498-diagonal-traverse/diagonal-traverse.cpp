class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        vector<vector<int>> d(r+c-1);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                d[i+j].push_back(mat[i][j]);
            }
        }
        vector<int> res;
        for(int i=0;i<d.size();i++){
            if(i%2==0){
                reverse(d[i].begin(), d[i].end());
            }
            for(int j=0;j<d[i].size();j++){
                res.push_back(d[i][j]);
            }
        }
        return res;
    }
};