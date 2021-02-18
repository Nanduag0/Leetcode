class Solution {
public:
    string removeKdigits(string s, int k)
    {
        stack<char> stk;
        
        for(auto c : s)
        {
            while(!stk.empty() && k>0 && stk.top()>c)
            {
                k--;
                stk.pop();
            }
            
            if(c!='0' || !stk.empty())
                stk.push(c);
        }
        
        while(k>0 && !stk.empty())
        {
            stk.pop();
            k--;
        }
        
        string ans = "";
        while(stk.size())
        {
            ans += stk.top();
            stk.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans=="" ? "0" : ans;
    }
};