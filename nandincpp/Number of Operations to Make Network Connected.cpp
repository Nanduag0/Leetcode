class Solution {
    vector<int> par;
    int super(int x)
    {
        if(par[x] == x)
            return x;
        return super(par[x]);
    }
    
    void unite(int x, int y)
    {
        int super_x = super(x);
        int super_y = super(y);
        
        if(super_x != super_y)
            par[super_x] = super_y;
    }
    
public:
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        int c = connections.size();
        if(n-1 > c)
            return -1;
        
        par.resize(n);
        for(int i=0;i<n;i++)
            par[i] = i;
        
        for(int i=0;i<connections.size();i++)
        {
            int sup_x = super(connections[i][0]);
            int sup_y = super(connections[i][1]);
            
            if(sup_x != sup_y)
                unite(sup_x, sup_y);
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
            if(par[i] == i)
                ans++;
        
        return --ans;
    }
};