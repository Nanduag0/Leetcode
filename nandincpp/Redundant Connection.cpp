class Solution {
    vector<int> par;
    int get_sp(int x)
        {
            if(par[x] == -1)
                return x;
        
            return get_sp(par[x]);
        }
    void unite(int x, int y)
    {
        int sp_x = get_sp(x);
        int sp_y = get_sp(y);
        
        if(sp_x != sp_y)
            par[sp_y] = sp_x;
    }
    
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        par.push_back(-1);
        for(int i=0;i<edges.size();i++)
            par.push_back(-1);
        
        for(int i=0;i<edges.size();i++)
        {
            if(get_sp(edges[i][0]) == get_sp(edges[i][1]))
                return {edges[i][0], edges[i][1]};
            unite(get_sp(edges[i][0]), get_sp(edges[i][1]));
        }
        
        return {};
    }
};