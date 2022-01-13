class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for (int i = 0, n = matrix.size(); i < n; ++i) {
            bitset<100> row, col; 
            for (int j = 0; j < n; ++j) 
                row[matrix[i][j]-1] = col[matrix[j][i]-1] = true; 
            if (row.count() < n || col.count() < n) return false; 
        }
        return true; 
    }
};