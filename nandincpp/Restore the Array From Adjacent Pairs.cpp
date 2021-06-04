class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) 
    {
        unordered_map<int, vector<int>> g;
        int n = adjacentPairs.size();
        n++; //observation
        
        for(auto i : adjacentPairs)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        
        vector<int> ans(n);
        for(auto i : g)
        {
            if(i.second.size() == 1)
            {
                ans[0] = i.first;
                ans[1] = i.second[0];
                break;
            }
        }
        
        for(int i=2;i<n;i++)
        {
            auto x = g[ans[i-1]];
            
            if(x.size() == 1)
                ans[i] = x[0];
            else
                ans[i] = (x[0]==ans[i-2]) ? x[1] : x[0];
        }
        
        return ans;
    }
};