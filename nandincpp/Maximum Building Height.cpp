class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& arr) {
        arr.push_back({1, 0});
        arr.push_back({n, n - 1});
        sort(arr.begin(), arr.end());
        int m = arr.size();
        
        for (int i = 1; i < m; ++i)
            arr[i][1] = min(arr[i][1], arr[i-1][1] + arr[i][0] - arr[i-1][0]);
        for (int i = m - 2; i >= 0; --i)
            arr[i][1] = min(arr[i][1], arr[i+1][1] + arr[i+1][0] - arr[i][0]);
        
        int ans = 0, l, h1, r, h2;
        for (int i = 1; i < m; ++i) {
            l = arr[i-1][0], r = arr[i][0], h1 = arr[i-1][1], h2 = arr[i][1];
            ans = max(ans, max(h1, h2) + (r - l - abs(h1 - h2)) / 2);
        }
        return ans;
    }
};