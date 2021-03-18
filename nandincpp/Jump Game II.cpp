class Solution {
public:
    int jump(vector<int>& a) 
    {
        int n = a.size();
        vector<int> ans(n);
        
        ans[0] = 0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[j]+j >= i)
                {
                    ans[i] = 1 + ans[j];
                }
            }
        }
        
        return ans[n-1];
    }
};
