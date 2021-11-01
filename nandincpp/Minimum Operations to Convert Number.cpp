class Solution {
public:
    int minimumOperations(vector<int>& a, int start, int goal) 
    {
        queue<int> q;
        q.push(start);
        vector<bool> vis(1001, 0);
        int ans = 0;
        
        while(!q.empty())
        {
            auto sizee = q.size();
            
            while(sizee--)
            {
                auto p = q.front();
                q.pop();
                
                if(p == goal)
                    return ans;
                if(p<0 || p>1000 || vis[p]==1)
                    continue;
                vis[p] = 1;
                
                for(int i=0;i<a.size();i++)
                {
                    int x = a[i] + p;
                    int y = p - a[i];
                    int z = p ^ a[i];
                    
                    q.push(x), q.push(y), q.push(z);
                }
            }
            
            ans ++;
        }
        
        return -1;
    }
};