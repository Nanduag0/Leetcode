class Solution {
public:
    string decodeAtIndex(string s, int k)
    {
        long long sizee = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                sizee = sizee * (s[i] - '0');
            else
                sizee++;
        }
        string ans = "";
        
        for(int i=s.size()-1;i>=0;i--)
        {
            k %= sizee;
            
            if(k==0 && !isdigit(s[i]))
            {
                ans += s[i];
                return ans;
            }
            
            if(isdigit(s[i]))
                sizee = sizee/(s[i] - '0'); 
            else
                sizee --;
        }
        
        return "";
    }
};