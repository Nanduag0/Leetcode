class Solution {
    const int mod = 1e9 + 7;
public:
    int maxSumRangeQuery(vector<int>& a, vector<vector<int>>& r) 
    {
        int n = a.size();
        vector<int> cnt(n, 0);
        
        for(auto i : r)
        {
            cnt[i[0]] += 1;
            
            if(i[1]+1 < n)
                cnt[i[1]+1] -= 1;
        }
        
        for(int i=1;i<n;i++)
            cnt[i] += cnt[i-1];
        
        sort(a.rbegin(), a.rend());
        sort(cnt.rbegin(), cnt.rend());
        
        long long ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += ((long long)a[i]*cnt[i]);
            ans %= mod;
        }
        
        return (int)ans;
    }
};