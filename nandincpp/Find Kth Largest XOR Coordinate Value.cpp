class Solution {
public:
    int kthLargestValue(vector<vector<int>>& mat, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int m = mat.size(), n = mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j] = ((i>0)?mat[i-1][j]:0) ^ ((j>0)?mat[i][j-1]:0) ^ ((i>0&&j>0)?mat[i-1][j-1]:0) ^ mat[i][j];
                
                pq.push(mat[i][j]);
                if(pq.size() > k)
                    pq.pop();
            }
        }
        return pq.top();
    }
};