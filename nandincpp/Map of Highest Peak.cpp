class Solution {
    queue<pair<int, int>> q;
    vector<int> dr = {0, 0, -1, 1}, dc = {-1, 1, 0, 0};
    
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& mat)
    {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> ans(m, vector<int> (n, INT_MAX));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j] == 1)
                {
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        
        while(!q.empty())
        {
            pair<int, int> p1 = q.front();
            q.pop();
            
            int r = p1.first, c = p1.second;
            
            for(int i=0;i<4;i++)
            {
                int rr = r + dr[i];
                int cc = c + dc[i];
                
                if(rr>=0 && rr<m && cc>=0 && cc<n && ans[rr][cc]>1+ans[r][c])
                {
                    ans[rr][cc] = 1 + ans[r][c];
                    q.push({rr, cc});
                }
            }
        }
        
        return ans;
    }
};