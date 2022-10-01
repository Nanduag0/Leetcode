#define ll long long
class Solution {
public:
    long long minimumRemoval(vector<int>& beans)
    {
        ll ts = 0;
        for(int i=0;i<beans.size();i++)
            ts += beans[i];
        
        ll n = beans.size(), ans = LONG_MAX;
        sort(beans.begin(), beans.end());
        for(int i=0;i<n;i++)
        {
            ans = min(ans, ts-beans[i]*(n-i));
        }
        
        return ans;
    }
};