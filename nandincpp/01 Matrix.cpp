class Solution {
    vector<int> row = {0, 0, -1, 1}, col = {-1, 1, 0, 0};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
    {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dist(n, vector<int> (m, -1));
        
        queue<pair<int, int>> q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 0)
                {
                    dist[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int x = p.first + row[i];
                int y = p.second + col[i];
                
                if(x>=0 && y>=0 && x<n && y<m && dist[x][y]==-1)
                {
                    dist[x][y] = 1 + dist[p.first][p.second];
                    q.push({x, y});
                }
            }
        }
        return dist;
    }
};