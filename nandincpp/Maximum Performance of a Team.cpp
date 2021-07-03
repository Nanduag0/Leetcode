#define ll long long 
class Solution {
    const int mod = 1e9 + 7;
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) 
    {
        vector<pair<int, int>> g;
        for(int i=0;i<n;i++)
        {
            g.push_back({efficiency[i], speed[i]});
        }
        
        sort(g.rbegin(), g.rend());
        priority_queue<int, vector<int>, greater<int>> pq;
        ll ans = 0, speed_sum = 0;
        
        for(int i=0;i<n;i++)
        {
            int speed_now = g[i].second;
            speed_sum += g[i].second;
            pq.push(speed_now);
            
            if(pq.size() > k)
            {
                speed_sum -= pq.top();
                pq.pop();
            }
            
            ans = max(ans, speed_sum*g[i].first);
        }
        
        return ans%mod;
    }
};