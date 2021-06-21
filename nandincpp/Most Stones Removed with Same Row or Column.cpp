class Solution {
    vector<int> par;
    
    int sp(int x)
    {
        if(par[x] == x)
            return x;
        return sp(par[x]); 
    }
public:
    int removeStones(vector<vector<int>>& stones) 
    {
        int n = stones.size();
        par.resize(n);
        
        for(int i=0;i<stones.size();i++)
            par[i] = i;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                {
                    int sp_x = sp(i);
                    int sp_y = sp(j);
                    
                    if(sp_x != sp_y)
                        par[sp_x] = sp_y;
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
            if(par[i] == i)
                ans++;
        
        ans = n - ans;
        return ans;
    }
};