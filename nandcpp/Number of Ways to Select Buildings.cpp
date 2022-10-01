class Solution {
public:
    long long numberOfWays(string s)
    {
        long long of = 0, zf = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')
                zf++;
            else
                of++;
        }
        
        long long ans = 0, ob = 0, zb = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '0')
                zf--, zb++;
            else if(s[i] == '1')
                of--, ob++;
            
            if(i == s.size()-1)
                continue;
            
            if(s[i] == '0')
                ans += (of*ob);
            else
                ans += (zf*zb);
        }
        
        return ans;
    }
};