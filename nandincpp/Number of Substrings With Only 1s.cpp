class Solution {
    const int mod = 1e9+7;
public:
    int numSub(string s)
    {
        int sum = 0, prev = 1;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1' && s[i]!=s[i-1])
            {
                sum ++;
                sum %= mod;
                prev = 1;
            }
            
            else if(s[i]=='1' && s[i]==s[i-1])
            {
                sum += (prev+1);
                sum %= mod;
                prev++;
            }
        }
        
        if(s[0] == '1')
        return sum+1;
        
        return sum;
    }
};