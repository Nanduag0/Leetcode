class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if (grid.size() < 3 || grid[0].size() < 3)
            return 0;
        
        int count = 0;
        for (int i = 0; i < grid.size() - 2; i++)
            for (int j = 0; j < grid[0].size() - 2; j++)
                count += check(grid, i, j);
        return count;
    }
private:
    bool check(vector<vector<int>>& m, int i, int j) {
        set<int> dist;
        for (int r = i; r < i + 3; r++)
            for (int c = j; c < j + 3; c++)
                if (m[r][c] >= 1 && m[r][c] <= 9)
                    dist.insert(m[r][c]);
        if (dist.size() != 9)
            return false;

        int sum = m[i][j] + m[i][j + 1] + m[i][j + 2];
        return (
            m[i + 1][j] + m[i + 1][j + 1] + m[i + 1][j + 2] == sum && // rows
            m[i + 2][j] + m[i + 2][j + 1] + m[i + 2][j + 2] == sum &&
            
            m[i][j] + m[i + 1][j] + m[i + 2][j] == sum && // cols
            m[i][j + 1] + m[i + 1][j + 1] + m[i + 2][j + 1] == sum &&
            m[i][j + 2] + m[i + 1][j + 2] + m[i + 2][j + 2] == sum &&
            
            m[i][j] + m[i + 1][j + 1] + m[i + 2][j + 2] == sum && // diagonals
            m[i][j + 2] + m[i + 1][j + 1] + m[i + 2][j]
           );
    }
};