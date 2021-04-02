class Solution {
public:
    vector<int> getRow(int n) 
    {
       
        vector<int> ans(n+1, 1);
        
        for(int i=1;i<n;i++) 
        {
            for(int j=i;j>0;j--)
            {
                ans[j] += ans[j-1];
            }
        }
        
        return ans;
    }
};