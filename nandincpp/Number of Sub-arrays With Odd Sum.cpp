#define ll long long
class Solution {
    const int mod = 1e9 + 7;
public:
    int numOfSubarrays(vector<int>& a) 
    {
        ll prefix = 0;
        ll odd = 0, even = 1;
        ll ans = 0;
        
        for(auto i : a)
        {
            prefix += i;
            
            if(prefix%2 == 0)
            {
                ans += odd;
                ans %= mod;
                even++;
            }
            
            else
            {
                ans += even;
                ans %= mod;
                odd++;
            }
        }
        
        return ans;
    }
};