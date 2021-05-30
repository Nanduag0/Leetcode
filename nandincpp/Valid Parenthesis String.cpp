class Solution {
public:
    bool checkValidString(string s) 
    {
        int bala = 0, extra = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '*')
                extra++;
            
            else if(s[i] == '(')
                bala++;
            else if(s[i] == ')')
                bala--;
            
            if(bala < 0)
            {
                if(extra > 0)
                {
                    bala = 0;
                    extra--;
                }
                
                else
                    return 0;
            }
        }
        
        extra = bala = 0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '*')
                extra++;
            
            else if(s[i] == ')')
                bala++;
            else if(s[i] == '(')
                bala--;
            
            if(bala < 0)
            {
                if(extra > 0)
                {
                    bala = 0;
                    extra--;
                }
                
                else
                    return 0;
            }
        }
        
        return 1;
    }
};