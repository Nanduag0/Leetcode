class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B)
    {
        int n = A.size();
        
        multiset<int> ms(A.begin(), A.end());
        vector<int> ans(n ,-1);
        
        for(int i=0;i<n;i++)
        {
            auto it = ms.upper_bound(B[i]);
            
            if(it != ms.end())
            {
                ans[i] = *it;
                ms.erase(it);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(ans[i] == -1)
            {
                ans[i] = *ms.begin();
                ms.erase(ms.begin());
            }
        }
        
        return ans;
    }
};