class Solution {
    int ans = 0;
public:
    int minInsertions(string s) 
    {
        stack<int> stk;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                if(stk.empty() || stk.top()==2)
                    stk.push(2);
                else
                {
                    ans++;
                    stk.pop();
                    stk.push(2);
                }
            }
            
            else
            {
                if(stk.empty())
                {
                    ans++;
                    stk.push(1);
                }
                
                else if(stk.top() == 1)
                {
                    stk.pop();
                }
                
                else 
                {
                    stk.pop();
                    stk.push(1);
                }
            }
        }
        
        while(!stk.empty())
            ans += stk.top(), stk.pop();
        
        return ans;
    }
};