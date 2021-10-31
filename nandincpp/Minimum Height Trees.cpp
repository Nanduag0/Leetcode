class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) 
    {
        if(n == 1)
            return {0};
        
        queue<int> q;
        vector<vector<int>> g(n);
        vector<int> deg(n, 0);
        
        for(auto i : edges)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
            
            deg[i[0]]++, deg[i[1]]++;
        }
        
        vector<int> ans;
        
        for(int i=0;i<n;i++)
            if(deg[i] == 1)
                q.push(i);
        
        while(!q.empty())
        {
            int sizee = q.size();
            ans.clear();
            
            while(sizee--)
            {
                auto p = q.front();
                q.pop();
                ans.push_back(p);
                
                for(auto i : g[p])
                {
                    deg[i]--;
                    
                    if(deg[i] == 1)
                        q.push(i);
                }
            }
        }
        
        return ans;
    }
};