#define ll long long
class Solution {
    const int mod = 1e9 + 7;
    
    ll fast(ll a, ll b)
    {
        ll res = 1;
        
        a = a%mod;
        if(a == 0)
            return 0;
        
        while(b > 0)
        {
            if(b & 1)
                res = (res*a) % mod;
            
            a = (a*a) % mod;
            b = b >> 1;
        }
        
        return res;
    }
public:
    int countGoodNumbers(long long n) 
    {
        bool flag = 0;
        
        if(n%2 != 0)
            flag = 1;
        
       // n /= 2;
        ll op1 = fast(4, n/2);
        ll op2 = fast(5, n/2);
        
        if(flag)
            op2 *= 5;
        
        ll ans = op1*op2;
        ans %= mod;
        
        return ans;
    }
};