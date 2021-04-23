class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& p)
    {
        sort(p.begin(), p.end(), [&](auto x, auto y)
             {
                 return x[0]<y[0];
             });
        
        int maxi = 0;
        for(int i=1;i<p.size();i++)
            maxi = max(maxi, p[i][0]-p[i-1][0]);
        
        return maxi;
            
    }
};