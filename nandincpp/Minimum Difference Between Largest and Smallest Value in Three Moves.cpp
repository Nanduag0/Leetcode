class Solution {
public:
    int minDifference(vector<int>& a)
    {
        sort(a.begin(), a.end());
        int n = a.size();
        
        if(n < 5)
            return 0;
        
        int t = min({a[n-3]-a[1], a[n-4]-a[0], a[n-2]-a[2], a[n-1]-a[3]});
        return t;
    }
};