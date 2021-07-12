class Solution {
public:
    vector<int> getMaximumXor(vector<int>& a, int mb) 
    {
        int xorr = 0;
        for(auto i : a)
            xorr ^= i;
        
        int n = a.size();
        vector<int> ans(n);
        
        xorr ^= ((1<<mb)-1);
        ans[0] = xorr;
        
        for(int i=1;i<n;i++)
        {
            xorr = (xorr ^ a[n-i]);
            ans[i] = xorr;
        }
        
        return ans;
    }
};