class Solution {
    const int mod = 1e9+7;
public:
    int countHomogenous(string s) 
    {
        long long sum = 0, prev = 1;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i] != s[i-1])
            {
                sum++;
                sum %= mod;
                prev = 1;
            }
            
            else
            {
                sum += (prev+1);
                sum %= mod;
                prev++;
            }
        }
        
        return sum+1;
    }
};