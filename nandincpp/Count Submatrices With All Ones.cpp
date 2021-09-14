class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dup(n, vector<int> (m));
        
        for(int i=0;i<n;i++)
        {
            int cnt = 0;
            for(int j=m-1;j>=0;j--)
            {
                if(mat[i][j] == 1)
                    cnt++;
                else
                    cnt = 0;
                
                dup[i][j] = cnt;
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int x = INT_MAX;
                for(int k=i;k<n;k++)
                {
                    x = min(x, dup[k][j]);
                    ans += x;
                }
            }
        }
        
        return ans;
    }
};