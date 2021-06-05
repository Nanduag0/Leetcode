class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& a)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        sort(a.begin(), a.end(), [&](auto x, auto y)
             {
                 return x[1]<=y[1];
             });
        
        int n = a.size();
        int i = 0, ans = 0;
        while(i < n)
        {
            int j=i+1;
            
            while(j<n && a[i][1]>=a[j][0])
            {
                j++;
            }
            
            ans++;
            i = j;
        }
        
        return ans;
    }
};