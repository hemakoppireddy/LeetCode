class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rookRow = -1, rookCol = -1;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    rookRow = i;
                    rookCol = j;
                    break;
                }
            }
        }
        int count = 0;
        for (int r = rookRow - 1; r >= 0; r--) {
            if (board[r][rookCol] == 'B') break;
            if (board[r][rookCol] == 'p') { count++; break; }
        }
        for (int r = rookRow + 1; r < 8; r++) {
            if (board[r][rookCol] == 'B') break;
            if (board[r][rookCol] == 'p') { count++; break; }
        }
        for (int c = rookCol - 1; c >= 0; c--) {
            if (board[rookRow][c] == 'B') break;
            if (board[rookRow][c] == 'p') { count++; break; }
        }
        for (int c = rookCol + 1; c < 8; c++) {
            if (board[rookRow][c] == 'B') break;
            if (board[rookRow][c] == 'p') { count++; break; }
        }
        return count;
    }
};