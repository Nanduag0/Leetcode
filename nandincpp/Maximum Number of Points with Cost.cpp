#define ll long long
#define vi vector<ll>

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size(), m = points[0].size();
        vector<vector<ll>> dp(n, vector<ll>(m));
        
        for(int c = 0 ; c < m ; c++) {
            dp[0][c] = points[0][c];
        }
        
        for(int r = 1 ; r < n ; r++) {
            vector<ll> left(m), right(m);
            
            left[0] = dp[r-1][0];
            for(int c = 1 ; c < m ; c++) {
                left[c] = max(left[c-1], dp[r-1][c] + c);
            }
            
            right[m-1] = dp[r-1][m-1] - (m-1);
            for(int c = m-2 ; c >= 0 ; c--) {
                right[c] = max(right[c+1], dp[r-1][c] - c);
            }
            
            for(int c = 0 ; c < m ; c++) {
                dp[r][c] = points[r][c] + max(left[c] - c, right[c] + c);
            }
        }
                
        return *max_element(dp[n-1].begin(), dp[n-1].end());
    }
};