#define mod 1000000007


class Solution {
public:
    int concatenatedBinary(int n) 
    {
        long long int ans = 0;
        int i = 1;
        
        while(i <= n)
        {
             ans = ((ans << (1+int(log2(i))))%1000000007 + i)%1000000007;
            i++;
        }
        
        return ans;           
    }
};