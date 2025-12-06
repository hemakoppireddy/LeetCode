class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rowZeros;
        vector<int> rowOnes;
        for(int i=0; i<n; i++) {
            int zeros=0, ones=0;
            for(int j=0; j<m; j++){
                if(grid[i][j]==0) zeros++;
                else ones++;
            }
            rowZeros.emplace_back(zeros);
            rowOnes.emplace_back(ones);
        }

        vector<int> colZeros;
        vector<int> colOnes;
        for(int j=0; j<m; j++) {
            int zeros=0, ones=0;
            for(int i=0; i<n; i++){
                if(grid[i][j]==0) zeros++;
                else ones++;
            }
            colZeros.emplace_back(zeros);
            colOnes.emplace_back(ones);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                grid[i][j]= rowOnes[i]+colOnes[j] - (rowZeros[i]+colZeros[j]);
            }
        }
        return grid;
    }
};