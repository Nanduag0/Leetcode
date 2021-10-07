class Solution {
public:
    typedef long long int ll;
    const int mod=(int)1e9+7;
    ll modpow(ll a,ll b)
    {
        ll res=1;
        while(b)
        {
            if(b&1)
                res=(res%mod * a%mod)%mod;
            b/=2;
            a=(a%mod * a%mod)%mod;
        }
        return res;
    }
    int maxNiceDivisors(int n) {
        if(n<3)
        {
            return n;
        }
        if(n%3==0)
            return modpow(3,n/3);
        else if(n%3==1)
        return (modpow(3,(n/3) -1)%mod * 4%mod)%mod;
        return (modpow(3,n/3)%mod * 2%mod)%mod;
    }
};
