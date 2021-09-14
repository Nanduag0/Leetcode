class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) 
    {
        long long ans = 0;
        
        for(int i=1;i<a.size();i++)
        {
            ans += max(0, a[i-1]-a[i]);
        }
        
        return ans+a.back();
    }
};