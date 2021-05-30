class Solution {
    const int mod = 1e9 + 7;
public:
    int sumSubarrayMins(vector<int>& a) 
    {
        int n = a.size();
        stack<pair<int, int>> prev_less, next_less;
        vector<int> left_dist(n), right_dist(n);
        
        
        for(int i=0;i<n;i++)
        {
            while(!prev_less.empty() && prev_less.top().first>=a[i])
                prev_less.pop();
            
            left_dist[i] = (prev_less.empty()) ? i+1 : i-prev_less.top().second;
            prev_less.push({a[i], i});
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(!next_less.empty() && next_less.top().first>a[i])
                next_less.pop();
            
            right_dist[i] = (next_less.empty()) ? n-i : next_less.top().second-i;
            next_less.push({a[i], i});
        }
        
        long ans = 0;
        for(int i=0;i<n;i++)
        {
            ans += ((long)a[i] * left_dist[i] * right_dist[i]);
            ans %= mod;
        }
        
        return ans;
    }
};