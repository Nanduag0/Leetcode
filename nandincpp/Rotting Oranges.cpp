class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time=-1;
        if(grid.empty()) return time;
        
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        bool flag=false;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }else if(grid[i][j]==1){
                    flag=true;
                }  
            }
        }

        if(q.empty()){
            if(flag) return -1;
            else return 0;
        }
        
        while(!q.empty()){
             int size=q.size();
            for(int i=0;i<size;i++){
                pair<int,int> pr=q.front(); 
                q.pop();
                int x=pr.first;
                int y=pr.second;
                if(x-1>=0 && y>=0 && x-1<row && y<col && grid[x-1][y]==1){
                    grid[x-1][y]=2;
                    q.push({x-1,y});
                }
                if(x+1>=0 && y>=0 && x+1<row && y<col && grid[x+1][y]==1){
                    grid[x+1][y]=2;
                    q.push({x+1,y});
                }
                if(x>=0 && y-1>=0 && x<row && y-1<col && grid[x][y-1]==1){
                    grid[x][y-1]=2;
                    q.push({x,y-1});
                }
                if(x>=0 && y+1>=0 && x<row && y+1<col && grid[x][y+1]==1){
                    grid[x][y+1]=2;
                    q.push({x,y+1});
                }
            }//end of for-loop
            time++;    
        }//end of while-loop
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                   return -1;
                }  
            }
        }
        
        return time;
    }
};