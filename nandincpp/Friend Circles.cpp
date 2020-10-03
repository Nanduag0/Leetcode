class Solution {
public:
    void dfs_helper(map<int, list<int>> m, map<int, bool> &vis, int src)
    {
        vis[src] = true;
        
        for(auto child : m[src])
        {
            if(!vis[child])
                dfs_helper(m, vis, child);
        }        
    }
    
    
    int dfs(map<int, list<int>> m, int n)
    {
        map<int, bool> vis;
        
        for(int i=0;i<n;i++)
            vis[i] = false;
        
        dfs_helper(m, vis, 0);
        
        int ans = 1;
        for(int i=1;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs_helper(m, vis, i);
            }
        }
        
        return ans;        
    }
    
    int findCircleNum(vector<vector<int>>& M) 
    {
        int n = M.size();
        map<int, list<int> > m;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(M[i][j] == 1)
                    m[i].push_back(j);
            }
        }
        
        return dfs(m,n);
    }
        
    
}