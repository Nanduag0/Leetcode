class Solution {
    vector<int> ROW = {0, 0, -1, 1}, COL = {-1, 1, 0, 0};

    bool help(int row, int col, vector<vector<int>>& cells, int day)
    {
        vector<vector<int>> temp(row, vector<int>(col, 0));
        
        for(int i=0;i<day;i++)
            temp[cells[i][0]-1][cells[i][1]-1] = 1;
        
        queue<pair<int, int>> q;
        
        for(int i=0;i<col;i++)
        {
            if(temp[0][i] == 0)
            {
                q.push({0, i});
                temp[0][i] = 1;
            }
        }
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            if(p.first == row-1)
                return 1;
            
            for(int k=0;k<4;k++)
            {
                int x = p.first + ROW[k];
                int y = p.second + COL[k];
                
                if(x>=0 && y>=0 && x<row && y<col && temp[x][y]==0)
                {
                    q.push({x, y});
                    temp[x][y] = 1;
                }
            }
        }
        
        return 0;
    }
    
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) 
    {
        int low = 1, high = cells.size();
        int ans = 0;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(help(row, col, cells, mid))
            {
                ans = mid;
                low = mid + 1;
            }
            
            else
                high = mid - 1;
        }
        
        return ans;
    }
};