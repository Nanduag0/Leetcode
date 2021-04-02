class Solution {
    int cnt = 0;
public:
    int numSteps(string s) 
    {
        while(s.size() != 1)
        {
            if(s.back() == '0')
            {
                cnt++;
                s.pop_back();
            }
            
            else
            {
                cnt++;
                
                bool flag  =0;
                for(int i=s.size()-1;i>=0;i--)
                {
                    if(s[i] == '0')
                    {
                        s[i] = 1;
                        flag = 1;
                        break;
                    }
                    s[i] = '0';
                }
                
                if(!flag)
                {
                    s = '1' + s;
                }
            }
        }
        
        return cnt;
    }
};