class Solution {
public:
    int findLongestChain(vector<vector<int>>& p) 
    {
        sort(p.begin(), p.end(), [&](auto x, auto y)
             {
                 if(x[1] == y[1])
                     return x[0] < y[0];
                 
                 return x[1]<y[1];
             });
        
        int prev = p[0][1];
        int ans = 1;
        
        for(int i=1;i<p.size();i++)
        {
            if(p[i][0] > prev)
            {
                ans++;
                prev = p[i][1];
            }
        }
        
        return ans;
    }
};