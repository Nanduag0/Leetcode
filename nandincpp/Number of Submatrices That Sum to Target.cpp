class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& mat, int target) 
    {
        int ant = 0, H = mat.size(), W = mat[0].size();
        
        vector<vector<int>> pref(H, vector<int> (W));
        pref[0][0] = mat[0][0];
        
        for(int i=1;i<H;i++)
            pref[i][0] = pref[i-1][0] + mat[i][0];
        for(int i=1;i<W;i++)
            pref[0][i] = pref[0][i-1] + mat[0][i];
        
        for(int row=1;row<H;row++)
        {
            for(int col=1;col<W;col++)
            {
                pref[row][col] = pref[row-1][col]+pref[row][col-1]+mat[row][col]-pref[row-1][col-1];
            }
        }
        
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                 for(int x=i;x<H;x++)
                 {
                     for(int y=j;y<W;y++)
                     {
                         int temp = pref[x][y];
                         
                         if(i > 0)
                             temp -= pref[i-1][y];
                         if(j > 0)
                             temp -= pref[x][j-1];
                         if(i>0 && j>0)
                             temp += pref[i-1][j-1];
                         
                         if(temp == target)
                             ant++;
                     }
                 }
            }
        }
        
        return ant;
    }
};