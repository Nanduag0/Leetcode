class Solution {
public:
    vector<int> replaceElements(vector<int>& a)
    {
        int n = a.size();
        vector<int> ans(n);
        
        ans[n-1] = -1;
        
        for(int i=n-2;i>=0;i--)
            ans[i] = max(a[i+1], ans[i+1]);
        
        return ans;
    }
};