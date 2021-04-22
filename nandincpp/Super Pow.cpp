class Solution {
    const int mod = 1337;
    
    int help(int a, int k)
    {
        a %= mod;
        int res = 1;
        
        for(int i=0;i<k;i++)
            res = (res*a) % mod;
        
        return res;
    }
    
public:
    int superPow(int a, vector<int>& b) 
    {
        if(b.size() == 0)
            return 1;
        
        int last = b.back();
        b.pop_back();
        
        return help(superPow(a, b), 10)*help(a, last)%mod;
    }
};