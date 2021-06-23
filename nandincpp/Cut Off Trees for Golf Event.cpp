class Solution {
    int row[4] = {-1, 0, 1, 0}, col[4] = {0, -1, 0, 1};
    
    int bfs(vector<vector<int>>& forest, pair<int, int> src, pair<int, int> dest)
    {
        queue<pair<int, int>> q;
        q.push(src);
        
        int steps = -1;
        vector<vector<int>> vis(forest.size(), vector<int>(forest[0].size(), 0));
        vis[src.first][src.second] = 1;
        
        while(!q.empty())
        {
            steps++;
            int sizee = q.size();
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                if(p == dest)
                    return steps;
                
                for(int k=0;k<4;k++)
                {
                    int nx = p.first + row[k];
                    int ny = p.second + col[k];
                    
                    if(nx>=0 && ny>=0 && nx<forest.size() && ny<forest[0].size() && forest[nx][ny] && vis[nx][ny]==0)
                    {
                        q.push({nx, ny});
                        vis[nx][ny]  = 1;
                    }
                }
            }
        }
        return -1;
    }
public:
    int cutOffTree(vector<vector<int>>& forest) 
    {
        priority_queue< pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>> > pq;
        
        for(int i=0;i<forest.size();i++)
        {
            for(int j=0;j<forest[0].size();j++)
            {
                if(forest[i][j] > 1)
                    pq.push({forest[i][j], {i, j} });
            }
        }
        
        pq.push({1, {0, 0} });
        int ans = 0;
        
        while(!pq.empty())
        {
            auto src = pq.top().second;
            pq.pop();
            
            if(pq.empty())
                return ans;
            auto dest = pq.top().second;
            
            int steps = bfs(forest, src, dest);
            
            if(steps == -1)
                return -1;
            ans += steps;
        }
        
        return ans;
    }
};