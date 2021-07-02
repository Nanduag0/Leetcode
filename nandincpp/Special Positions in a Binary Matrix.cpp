class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<bool> row(n+1, 0), col(m+1, 0);
        
        for(int i=0;i<n;i++)
        {
            int one = 0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j] == 1)
                    one++;
            }
            
            if(one == 1)
                row[i] = 1;
        }
        
        for(int j=0;j<m;j++)
        {
            int one = 0;
            for(int i=0;i<n;i++)
            {
                if(mat[i][j] == 1)
                    one++;
            }
            
            if(one == 1)
                col[j] = 1;
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((row[i]==1 && col[j]==1 && mat[i][j]==1))
                    cnt++;
            }
        }
        
        return cnt;
    }
};