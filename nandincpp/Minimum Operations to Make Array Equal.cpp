class Solution {
public:
    int minOperations(int n) 
    {
        int need = n*n, ans;
        need /= 2;
        
        int koto = n/2;
        
        if(n&1)
        {
            ans = koto*(koto + 1);
        }
        else
            ans = koto*koto;
        
        return ans;
    }
};