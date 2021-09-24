#define ll long long
class Solution {
public:
    int minimumDifference(vector<int>& a, int k) 
    {
        int n = a.size();
        if(k <= 1)
            return 0;
        
        sort(a.begin(), a.end());
        
        ll i = n-1, j = n-k, ans = INT_MAX;
        
        while(j >= 0)
        {
            ll oo = a[i] -  a[j];
            
            if(ans > oo)
                ans = oo;
            i--, j--;
        }
        return (int)ans;
    }
};