class Solution {
public:
    string smallestSubsequence(string s)
    {
        vector<int> last_index(26,0);
        int n = s.size();
        
        for(int i=0;i<n;i++)
            last_index[s[i]-'a'] = i;
        
        vector<bool> vis(26,0);
        stack<int> stk;
        
        for(int i=0;i<n;i++)
        {
            if(vis[s[i]-'a'])
                continue;
            
            while(!stk.empty() && i<last_index[stk.top()] && (s[i]-'a')<stk.top())
            {
                int x = stk.top();
                stk.pop();
                vis[x] = 0;                
            }
            
            stk.push(s[i]-'a');
            vis[s[i]-'a'] = 1;
        }
        
        string ans = "";
        while(!stk.empty())
        {
            char c = (char)(stk.top()+'a');
            ans += c;
            stk.pop();
        }
        
         reverse(ans.begin(), ans.end());
        return ans;
    
    }
};