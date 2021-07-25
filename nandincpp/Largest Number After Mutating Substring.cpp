class Solution {
public:
    string maximumNumber(string s, vector<int>& change) 
    {
        bool changed = 0;
        for(int i=0;i<s.size();i++)
        {
            int now = s[i]-'0';
            int then = change[now];
            
            if(now < then)
            {
                changed = 1;
                s[i] = then+'0';
            }
            
            else if(now == then)
                continue;
            else
            {
                if(changed)
                    break;
                continue;
            }
        }
        
        return s;
    }
};