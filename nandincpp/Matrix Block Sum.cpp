class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
    {
        const int h = mat.size(), w = mat[0].size();
        
        //prefix 2d sum
        vector<vector<int>> pre(h, vector<int> (w));
        pre[0][0] = mat[0][0];
        
        for(int i=1;i<h;i++)
            pre[i][0] = pre[i-1][0] + mat[i][0];
        for(int i=1;i<w;i++)
            pre[0][i] = pre[0][i-1] + mat[0][i];
        
        for(int row=1;row<h;row++)
        {
            for(int col=1;col<w;col++)
            {
                pre[row][col] = pre[row-1][col] + pre[row][col-1] + mat[row][col] - pre[row-1][col-1];
            }
        }
        
        //mat calculation
        vector<vector<int>> ans (h, vector<int> (w));
        
        for(int row=0;row<h;row++)
        {
            for(int col=0;col<w;col++)
            {
                int r1 = max(0, row - k);
                int r2 = min(h-1, row + k);
                int c1 = max(0, col - k);
                int c2 = min(w-1, col + k);
                
                ans[row][col] = pre[r2][c2] + (r1&&c1 ? pre[r1-1][c1-1] : 0) - (r1 ? pre[r1-1][c2] : 0) -(c1 ? pre[r2][c1-1] : 0);
            }
        }
        
        return ans;
    }
};