class Solution {
public:
    int minMoves2(vector<int>& a)
    {
        int ans = 0, n = a.size();
        sort(a.begin(), a.end());
        
        for(int i=0;i<n;i++)
        {
            ans += abs(a[i] - a[n/2]);
        }
        
        return ans;
    }
};