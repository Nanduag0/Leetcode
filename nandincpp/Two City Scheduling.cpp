class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& a) 
    {
        sort(a.begin(), a.end(), [&](auto x, auto y)
             {
                return x[0]-x[1]<y[0]-y[1]; 
             });
        
        int sum = 0, N = a.size(), n;
        n = N/2;
        
        for(int i=0;i<n;i++)
            sum += a[i][0];
        for(int i=n;i<N;i++)
            sum += a[i][1];
        
        return sum;
    }
};