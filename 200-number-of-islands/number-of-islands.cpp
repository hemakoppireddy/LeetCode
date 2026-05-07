class Solution {
public:
    void dfs(vector<vector<char>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();
        if(r<0 || c<0 || r>=m || c>=n || grid[r][c]=='0') {
            return;
        }
        grid[r][c]='0';
        dfs(grid, r+1, c);
        dfs(grid, r-1, c);
        dfs(grid, r, c-1);
        dfs(grid, r, c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
      int m = grid.size();
      int n=grid[0].size();
      int count=0;
      for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(grid[i][j]=='1') {
                count++;
                dfs(grid, i, j);
            }
        }
      }
      return count;
    }
};
// class Solution {
// public:
//     void dfs(vector<vector<char>>& grid, int row, int col) {
//         int m = grid.size();
//         int n = grid[0].size();
//         if(row < 0 || col < 0 || row >= m || col >= n || grid[row][col] == '0') {
//             return;
//         }
//         grid[row][col] = '0';
//         dfs(grid, row + 1, col);
//         dfs(grid, row - 1, col);
//         dfs(grid, row, col + 1);
//         dfs(grid, row, col - 1);
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int count = 0;
//         for(int i = 0; i < m; i++) {
//             for(int j = 0; j < n; j++) {
//                 if(grid[i][j] == '1') {
//                     count++;
//                     dfs(grid, i, j);
//                 }
//             }
//         }
//         return count;
//     }
// };