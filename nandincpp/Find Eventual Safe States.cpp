class Solution {
    unordered_set<int> cycle, safe;
    
    bool dfs(int i, vector<vector<int>>& g, unordered_set<int> vis)
    {
        if(safe.find(i) != safe.end())
            return 1;
        if(cycle.find(i) != cycle.end())
            return 0;
        
        if(vis.find(i) != vis.end())
        {
            cycle.insert(i);
            return 0;
        }
        
        vis.insert(i);
        
        for(auto x : g[i])
        {
            if(!dfs(x, g, vis))
            {
                cycle.insert(i);
                return 0;
            }
        }
        
        safe.insert(i);
        return 1;
    }
    
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& g) 
    {
        vector<int> ans;
        unordered_set<int> vis;
        
        for(int i=0;i<g.size();i++)
        {
            if(dfs(i, g, vis))
                ans.push_back(i);
        }
        
        return ans;
    }
};