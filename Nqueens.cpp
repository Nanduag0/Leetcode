class Solution {
public:
    void solve(int col,vector<string> & board, vector<vector<string>>&ans,vector<int>& leftRow,
               vector<int>&upDiag,vector<int>& lowDiag,int n){
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n; row++){
            if(leftRow[row]==0 && upDiag[n-1+col-row] ==0 && lowDiag[row+col]==0){
                board[row][col] = 'Q';
                leftRow[row] =1;
                lowDiag[row+col] =1;
                upDiag[n-1+col-row] =1;
                solve(col+1, board, ans, leftRow, upDiag, lowDiag, n);
                board[row][col] = '.';
                leftRow[row] =0;
                lowDiag[row+col] = 0;
                upDiag[n-1+col-row] = 0;
                
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        
        vector<int> leftRow(n,0), upDiag(2*n-1,0), lowDiag(2*n-1, 0);
        
        solve(0, board, ans, leftRow, upDiag, lowDiag, n);
        
        return ans;
    }
};
