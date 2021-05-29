class Solution {
public:
    int maxRotateFunction(vector<int>& a)
    {
        long long sum = 0, orig = 0;
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            orig += i*a[i];
        }
        
        long long maxi = orig;
        int n = a.size();
        
        for(int i=a.size()-1;i>=0;i--)
        {
            orig += (sum - (long long)a[i]*(n));
            maxi = max(maxi, orig);
        }
        
        return maxi;
    }
};