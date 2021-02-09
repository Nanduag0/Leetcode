class Solution {
public:
    int minMoves(vector<int>& a)
    {
        sort(a.begin(), a.end());
        int ans = 0;
        
        for(int i=1;i<a.size();i++)
        {
            ans += a[i]-a[0];
        }
        
        return ans;
    }
};