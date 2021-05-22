class Solution {
public:
    int countSubstrings(string s, string t) 
    {
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<t.size();j++)
            {
                int p = i, q = j, cnt = 0;
                
                while(p<s.size() &&q<t.size())
                {
                    if(s[p++] != t[q++])
                        cnt++;
                    
                    if(cnt == 1)
                        ans++;
                    else if(cnt > 1)
                        break;
                }
            }
        }
        
        return ans;
    }
};