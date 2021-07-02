#define ll long long
class Solution {
    const int mod = 1e9 + 7;
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) 
    {
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        
        ll max_len = 0;
        for(int i=1;i<verticalCuts.size();i++)
            max_len = max(max_len, (ll)verticalCuts[i]-verticalCuts[i-1]);
        
        ll max_breadth = 0;
        for(int i=1;i<horizontalCuts.size();i++)
            max_breadth = max(max_breadth, (ll)horizontalCuts[i]-horizontalCuts[i-1]);
        
        ll ans = max_len * max_breadth;
        ans %= mod;
        
        return (int)ans;
    }
};