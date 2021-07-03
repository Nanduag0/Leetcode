class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) 
    {
        vector<unordered_set<int>> g(n);
        
        for(auto i: roads)
        {
            g[i[0]].insert(i[1]);
            g[i[1]].insert(i[0]);
        }
        
        int ans = 0;
       // int n = roads.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int temp = g[j].size() + g[i].size();
                
                if(g[i].count(j))
                    temp--;
                
                ans = max(ans, temp);
            }
        }
        
        return ans;
    }
};