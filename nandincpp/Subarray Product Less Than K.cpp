class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k)
    {
        int s = 0, e = 0;
        int ans = 0, prod = 1;
        int n = a.size();
        if(k <= 1)
            return 0;
        
        for(int e=0;e<n;e++)
        {
            prod *= a[e];
            
            while(prod >= k)
            {
                prod /= a[s];
                s++;
            }
            
            ans += e-s+1;
           // e++;
        }
        
        return ans;
    }
};