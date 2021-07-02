class Solution {
public:
    int m,n;
    bool possible(vector<vector<int>>& prefix,int k,int threshold)
    {
        for(int i=0;i<=m-k;i++)
        {
            for(int j=0;j<=n-k;j++)
            {
                int sum=prefix[i+k][j+k]-prefix[i+k][j]-prefix[i][j+k]+prefix[i][j];
                if(sum<=threshold)
                    return true;
            }
        }
        return false;
    }
    int maxSideLength(vector<vector<int>>& mat, int threshold) 
    {
        m=mat.size(),n=mat[0].size();
        vector<vector<int>>prefix(m+1,vector<int>(n+1, 0));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+mat[i-1][j-1];
            }
        }
        int i=0,j=min(m,n),res=0;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(possible(prefix,mid,threshold))
            {
                res=mid;
                i=mid+1;
            }
            else
                j=mid-1;
        }
        return res;
    }
};