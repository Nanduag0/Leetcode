class Solution {
public:
    bool sumGame(string s)
    {
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
        {
            int x = (s[i]-'0')*2;
            
            if(s[i] == '?')
                x = 9;
            
            if(i < s.size()/2)
                ans += x;
            else
                ans -= x;
        }
        
        return ans != 0;
    }
};