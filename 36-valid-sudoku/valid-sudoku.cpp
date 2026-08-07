class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> square[9];
        for(int i=0; i<9; i++) {
            for(int j=0; j<9; j++) {
                if(board[i][j]=='.') continue;
                char ch = board[i][j];
                int box = (i/3)*3 + (j/3);
                if(row[i].count(ch)|| col[j].count(ch) || square[box].count(ch)) return false;
                row[i].insert(ch);
                col[j].insert(ch);
                square[box].insert(ch);
            }
        }
        return true;
    }
};