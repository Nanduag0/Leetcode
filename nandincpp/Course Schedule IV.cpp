class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& que)
    {
        unordered_map<int, vector<int>> g;
        
        for(auto i : pre)
        {
            g[i[0]].push_back(i[1]);
        }
        
        queue<int> q;
        vector<vector<bool>> can_reach(n, vector<bool>(n, 0)), vis(n, vector<bool>(n, 0));
        
        for(int i=0;i<n;i++)
        {
            q.push(i);
            
            while(!q.empty())
            {
                auto p = q.front();
                q.pop();
                
                for(auto x : g[p])
                {
                    if(vis[i][x])
                        continue;
                    
                    can_reach[i][x] = 1;
                    vis[i][x] = 1;
                    q.push(x);
                }
            }
        }
        
        vector<bool> ans;
        for(auto i : que)
            ans.push_back(can_reach[i[0]][i[1]]);
        
        return ans;
    }
};