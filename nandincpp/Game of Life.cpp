class Solution {
public:
    void setZeroOne(vector<vector<int>>& board,vector<vector<int>>& newBoard, int i, int j,int n,int m){
    int numOfOnes = 0;
    vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};
    for(int d = 0; d < dir.size(); d++){
        int r = i + dir[d][0];
        int c = j + dir[d][1];
        if(r >= 0 and c >= 0 and r < n and c < m){
            if(board[r][c] == 1) numOfOnes++;
        }
    }
    if(numOfOnes < 2) newBoard[i][j] = 0;
    else if((numOfOnes == 2 || numOfOnes == 3) && board[i][j] != 0) newBoard[i][j] = 1;
    else if(numOfOnes > 3) newBoard[i][j] = 0;
    else if(numOfOnes == 3) newBoard[i][j] = 1;
}
void gameOfLife(vector<vector<int>>& board){
    int n = board.size();
    int m = board[0].size();

    vector<vector<int>> newBoard(n, vector<int>(m, 0));
    // vector<vector<int>> dir = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{-1,1},{1,-1},{-1,-1}};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            setZeroOne(board,newBoard,i,j,n,m);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            board[i][j] = newBoard[i][j];
        }
    }
}
};