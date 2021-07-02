class Solution {
    vector<int> par;
    int get_sp(int x)
    {
       if(par[x] == x)
           return x;
        return par[x] = get_sp(par[x]);
    }
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) 
    {
        par.resize(n);
        for(int i=0;i<n;i++)
            par[i] = i;
        
        unordered_map<int, vector<int>> g;
        for(auto i : dislikes)
        {
            g[i[0]-1].push_back(i[1]-1);
            g[i[1]-1].push_back(i[0]-1);
        }
        
        for(auto i : g)
        {
            int x = get_sp(i.first);
            
            for(auto j : i.second)
            {
                int y = get_sp(j);
                
                if(x == y)
                    return 0;
                
                par[y] = par[i.second[0]];
            }
        }
        
        return 1;
    }
};