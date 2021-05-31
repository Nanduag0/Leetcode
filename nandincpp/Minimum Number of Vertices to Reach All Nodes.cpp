class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        set<int> vis;
        
        for(int i=0;i<edges.size();i++)
        {
            vis.insert(edges[i][1]);
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(vis.find(i) == vis.end())
                ans.push_back(i);
        }
        
        return ans;
    }
};