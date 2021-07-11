class Solution {
    vector<int> row = {0, 0, 1, -1}, col {1, -1, 0, 0};
public:
    int nearestExit(vector<vector<char>>& m, vector<int>& e)
    {
        int nn = m.size(), mm = m[0].size();
        
        queue<pair<int, int>> q;
        q.push({e[0], e[1]});
        m[e[0]][e[1]] = '+';
        
        int step = 0;
        
        while(!q.empty())
        {
            int sizee = q.size();
            step++;
            
            for(int i=0;i<sizee;i++)
            {
                auto p = q.front();
                q.pop();
                
                for(int k=0;k<4;k++)
                {
                    int x = p.first + row[k];
                    int y = p.second + col[k];
                    
                    if(x>=0 && y>=0 && y<mm && x<nn && m[x][y]!='+')
                    {
                        if(x==0 || x==nn-1 || y==0 || y==mm-1)
                        {
                           // if(p.first!=e[0] && p.second!=e[1])
                                return step;
                        }
                        m[x][y] = '+';
                        q.push({x, y});
                    }
                }
            }
        }
        return -1;
    }
};