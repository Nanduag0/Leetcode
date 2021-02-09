class Solution {
    
    string helper(string &s, int &i)
    {
        string ans = "";
        
        while(i<s.size() && s[i]!=']')
        {
            if(isdigit(s[i]))
            {
                int k = 0;
                
                while(isdigit(s[i]) && i<s.size())
                {
                    k = k*10 + (s[i]-'0');
                    i++;
                }
                
                i++; // to overcome [.
                
                string returnn = helper(s, i);
                while(k--)
                {
                    ans += returnn;
                }
                
                i++;
            }
            
            else
            {
                ans += s[i];
                i++;
            }
        }
        
        return ans;
    }
public:
    string decodeString(string s)
    {
        int i = 0;
        return helper(s, i);
    }
};