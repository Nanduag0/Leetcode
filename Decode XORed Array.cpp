class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        int n = encoded.size();
        vector<int> ans(n+1);
        ans[0] = first;
        
        for(int i=1;i<=n;i++)
        {
            ans[i] = encoded[i-1]^ans[i-1];
        }
        
        return ans;
    }
};