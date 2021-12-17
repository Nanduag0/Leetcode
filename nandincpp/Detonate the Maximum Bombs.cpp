#define ll long long

class Solution {
public:
    int maxi = INT_MIN;
    int n;
    
    void bfs(int i, vector<vector<int>>& bombs)
    {
        queue<int> q;
        q.push(i);
        vector<bool> vis(n, 0);
        int cnt = 1;
        vis[i] = 1;
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            vis[p] = 1;
            
            ll nowx = bombs[p][0], nowy = bombs[p][1], nowr = bombs[p][2];
            
            for(int k=0;k<n;k++)
            {
                if(vis[k] == 1)
                    continue;
                
                ll togox = bombs[k][0], togoy = bombs[k][1], togor = bombs[k][2];
                
                if(nowr*nowr >= ((nowx-togox)*(nowx-togox)+(nowy-togoy)*(nowy-togoy)))
                {
                    vis[k] = 1;
                    q.push(k);
                    cnt++;
                }
            }
        }
        
        maxi = max(maxi, cnt);
    }
    
    int maximumDetonation(vector<vector<int>>& bombs)
    {
        n = bombs.size();
        for(int i=0;i<n;i++)
        {
            bfs(i, bombs);
        }
        
        return maxi;
    }
};