class Solution {
public:
    int calculate(string s) 
    {
        stack<int> stk;
        int curr = 0;
        char operation = '+';
        
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                curr = curr*10 + (s[i]-'0'); 
            }
            
            if( (!isdigit(s[i])) && s[i]!=' ' || i==s.size()-1)
            {
                if(operation == '+')
                    stk.push(curr);
                else if(operation == '-')
                    stk.push(-curr);
                else if(operation =='*')
                {
                    int t = stk.top();
                    stk.pop();
                    stk.push(t*curr);
                }
                else if(operation =='/')
                {
                    int t = stk.top();
                    stk.pop();
                    stk.push(t/curr);
                }
                
                curr = 0;
                operation = s[i];
            }
        }
        
        int sum = 0;
        while(!stk.empty())
        {
            sum += stk.top();
            stk.pop();
        }
        
        return sum;
    }
};