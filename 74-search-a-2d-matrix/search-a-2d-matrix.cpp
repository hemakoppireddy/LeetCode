class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;

        while (i < n) {
            if (matrix[i][0] <= target && matrix[i][m - 1] >= target) {
                int low = 0, high = m - 1;
                while (low <= high) {
                    int mid = (low + high) / 2;
                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] < target) {
                        low = mid + 1;
                    } else if (matrix[i][mid] > target) {
                        high = mid - 1;
                    }
                }
                return false;
            } else if (matrix[i][m - 1] < target && i<n-1) {
                if(matrix[i + 1][0] <= target) i++;
                else return false;
            } else
                return false;
        }
        return false;
    }
};