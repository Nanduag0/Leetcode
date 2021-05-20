class Solution {
    pair<int, int> coordinate(int x, int n)
    {
        int r = n - (x-1)/n -1;
        int c = (x-1)%n;
        
        if(r%2==n%2)
            return {r,n-c-1};
        
        return {r, c};
    }
    
public:
    int snakesAndLadders(vector<vector<int>>& board) 
    {
        int n = board.size(), ans = 0;
        queue<int> q;
        q.push(1);
        
        bool vis[n][n];
        memset(vis, 0, sizeof(vis));
        
        vis[n-1][0] = 1;
        
        while(!q.empty())
        {
            int sizee = q.size();
            for(int i=0;i<sizee;i++)
            {
                auto x = q.front();
                q.pop();
                
                if(n*n == x)
                    return ans;
                
                for(int k=1;k<=6;k++)
                {
                    if(k+x > n*n)
                        break;
                    
                    auto p = coordinate(x+k, n);
                    if(vis[p.first][p.second])
                        continue;
                    
                    vis[p.first][p.second] = 1;
                    
                    if(board[p.first][p.second] != -1)
                        q.push(board[p.first][p.second]);
                    else
                        q.push(k+x);
                }
            }
            ans++;
        }
        
        return -1;
    }
};