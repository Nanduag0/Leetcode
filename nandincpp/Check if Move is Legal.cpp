class Solution {
    int dx[8] = {0,0,-1,1,-1,-1,1,1};
    int dy[8] = {1,-1,0,0,-1,1,-1,1};
public:
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) 
    {
        char other = (color == 'B') ? 'W' : 'B';
        for(int i=0;i<8;i++)
        {
            int x = rMove + dx[i];
            int y = cMove + dy[i];
            int dist = 1;
            
            while(x>=0 && y>=0 && x<8 && y<8 && board[x][y]!='.')
            {
                if(dist>=2 && board[x][y]==color)
                    return 1;
                
                if(board[x][y] != other)
                    break;
                
                dist++;
                x += dx[i];
                y += dy[i];
            }
        }
        
        return 0;
    }
};