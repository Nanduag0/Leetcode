class Solution {
public:
    double trimMean(vector<int>& a) 
    {
        int n = a.size();
        int koto = n/20;
        
        sort(a.begin(), a.end());
        
        int i = koto, j = n-1-koto;
        int sum = 0;
        
        for(int x=i;x<=j;x++)
            sum += a[x];
        
        n -= (2*koto);
        
        double ans = (double)(sum)/n;
        return ans;
    }
};