class Solution {
public:
    int minPairSum(vector<int>& a)
    {
        int n = a.size();
        sort(a.begin(), a.end());
        
        int i = 0, j = n-1;
        n = n/2;
        
        int ans = -1;
        while(i < n)
        {
            ans = max(ans, a[i]+a[j]);
            i++, j--;
        }
        
        return ans;
    }
};