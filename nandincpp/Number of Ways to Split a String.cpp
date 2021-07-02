#define ll long long
class Solution {
    const int mod = 1e9 + 7;
public:
    int numWays(string s)
    {
        ll o = 0;
        
        for(auto i : s)
            if(i-'0' == 1)
                o++;
        
        int n = s.size();
        ll ans;
        ll way1 = 0, way2 = 0;
        ll koto = o/3;
        
        if(o == 0)
        {
            ans = (ll)(n-1)*(n-2)/2;
            ans %= mod;
            return (int)ans;
        }
        
        else if(o%3 != 0)
            return 0;
        
        o = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]-'0' == 1)
                o++;
            
            if(o == koto)
                way1++;
            else if(o == 2*koto)
                way2++;
        }
        
        ans = way1*way2;
        ans %= mod;
        return (int)ans;
    }
};