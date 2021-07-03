class Solution {
    int ans = 0;
    int get_super(int x, vector<int>& par)
    {
        if(x == par[x])
            return x;
        
        return par[x] = get_super(par[x], par);
    }
    
    int unite(int x, int y, vector<int>& par)
    {
        int sp_x = get_super(x, par);
        int sp_y = get_super(y, par);
        
        if(sp_x != sp_y)
        {
            par[sp_x] = sp_y;
            return 1;
        }
        
        return 0;
    }
    
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) 
    {
        vector<int> par1(n+1), par2(n+1);
        
        for(int i=0;i<=n;i++)
            par1[i] = i;
        
        for(int i=0;i<edges.size();i++)
        {
            if(edges[i][0] == 3)
            {
                ans += unite(edges[i][1], edges[i][2], par1);
            }
        }
        
        for(int i=0;i<=n;i++)
            par2[i] = par1[i];
        
        for(int i=0;i<edges.size();i++)
        {
            if(edges[i][0] == 1)
            {
                ans += unite(edges[i][1], edges[i][2], par1);
            }
        }
        
        for(int i=0;i<edges.size();i++)
        {
            if(edges[i][0] == 2)
            {
                ans += unite(edges[i][1], edges[i][2], par2);
            }
        }
        
        int main_par1 = get_super(1, par1);
        int main_par2 = get_super(1, par2);
        
        for(int i=1;i<=n;i++)
        {
            if(get_super(i, par1) != main_par1)
                return -1;
            if(get_super(i, par2) != main_par2)
                return -1;
        }
        
        return edges.size()-ans;
    }
};