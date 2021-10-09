#define ll long long

class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) 
    {
        ll n = grid[0].size();
        vector<ll> pref1(n), pref2(n);
        pref1[0] = grid[0][0];
        pref2[0] = grid[1][0];
        
        for(ll i=1;i<n;i++)
        {
            pref1[i] = pref1[i-1] + (ll)grid[0][i];
            pref2[i] = pref2[i-1] + (ll)grid[1][i];
        }
        
        ll ans = LONG_MAX;
        for(ll i=0;i<n;i++)
        {
            ll op1 = pref1[n-1] - pref1[i];
            ll op2 = (i==0) ? 0 : pref2[i-1];
            
            ans = min(ans, max(op1, op2));
        }
        
        return ans;
    }
};