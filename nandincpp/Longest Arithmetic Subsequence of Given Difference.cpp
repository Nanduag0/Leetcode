class Solution {
public:
    int longestSubsequence(vector<int>& a, int diff)
    {
        int n = a.size(), ans = 1;
        map<int, int> m;
        
        for(int i=0;i<n;i++)
        {
            m[a[i]] = m[a[i]-diff] + 1;
            ans = max(ans, m[a[i]]);
        }
        
        return ans;
    }
};