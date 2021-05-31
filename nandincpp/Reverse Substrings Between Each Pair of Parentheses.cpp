class Solution {
public:
    string reverseParentheses(string s) 
    {
        stack<char> stk;
        int n = s.size();
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == ')')
            {
                string temp = "";
                while(stk.top() != '(')
                {
                    temp += stk.top();
                    stk.pop();
                }
                
                stk.pop();
                int k = 0;
                while(k < temp.size())
                    stk.push(temp[k++]);
            }
            
            else
                stk.push(s[i]);
            //i++;
        }
        
        string ans = "";
        while(!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};