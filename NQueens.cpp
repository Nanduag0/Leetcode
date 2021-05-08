class Solution {
int columns[10];
int  rdig[20];
int  ldig[20];
int board[10][10];    
public:
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>> ans;
        
        for(int i=0;i<10;i++)
        {
            columns[i]=0;
        }
        for(int i=0;i<20;i++)
        {
            rdig[0]=0;
        }
        for(int i=0;i<20;i++)
        {
            ldig[i]=0;
        }
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                board[i][j]=0;
                
            }
        }
        solve(board,0,n,ans);
        return ans;
        
    }
    void solve(int board[10][10],int row,int n,vector<vector<string>> &ans)
    {
        if(row==n)
        {
            string s;
            vector<string> v;
            for(int i=0;i<n;i++)
            {
                s="";
                for(int j=0;j<n;j++)
                {
                    if(board[i][j]==1)
                    {
                       s.push_back('Q');
                    }
                    else
                        s.push_back('.');
                }
                v.push_back(s);
            }
            ans.push_back(v);
            return;
            
        }
        for(int col=0;col<n;col++)
        {
           if(columns[col]==1 || rdig[row+col]==1 || ldig[row-col+n-1]==1)
               continue;
               columns[col]=1;
               rdig[row+col]=1;
               ldig[row-col+n-1]=1;
               board[row][col]=1;
               solve(board,row+1,n,ans);
               board[row][col]=0;
               columns[col]=0;
               rdig[row+col]=0;
               ldig[row-col+n-1]=0;
        }
        
    }
};