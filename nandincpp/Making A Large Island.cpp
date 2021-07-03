class Solution {
    int n, m;
    int dfs(vector<vector<int>>& grid, int i, int j, int idx)
    {
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]!=1)
            return 0;
        
        grid[i][j] = idx;
        
        int cnt = dfs(grid, i+1, j, idx) + dfs(grid, i-1, j, idx) + dfs(grid, i, j+1, idx) + dfs(grid, i, j-1, idx);
        
        return cnt+1;
    }
public:
    int largestIsland(vector<vector<int>>& grid)
    {
        n = grid.size();
        m = grid[0].size();
        unordered_map<int, int> area;
        int idx = 2, ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    area[idx] = dfs(grid, i, j, idx);
                    ans = max(ans, area[idx]);
                    idx++;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                //set<int> s;
                if(grid[i][j] == 0)
                {
                    set<int> s;
                    if(i>0)
                        s.insert(grid[i-1][j]);
                    if(j>0)
                        s.insert(grid[i][j-1]);
                    if(i<n-1)
                        s.insert(grid[i+1][j]);
                    if(j<m-1)
                        s.insert(grid[i][j+1]);
                    
                    int cnt = 1;
                    for(auto k : s)
                        cnt += area[k];
                    
                    //cnt++;
                    ans = max(ans, cnt);
                }
            }
        }
        
        return ans;
    }
};