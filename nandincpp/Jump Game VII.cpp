class Solution {
public:
    bool canReach(string s, int mini, int maxi) 
    {
        queue<int> q;
        q.push(0);
        
        int n = s.size(), reach = 0;
        
        bool vis[100005] = {};
        vis[0] = 1;
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            for(int i=max(p+mini, reach);i<=min(p+maxi, n-1);i++)
            {
                if(s[i] == '0')
                {
                    vis[i] = 1;
                    q.push(i);
                }
            }
            
            reach = max(reach, p+maxi);
        }
        
        return vis[n-1];
    }
};