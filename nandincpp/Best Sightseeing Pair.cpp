class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a)
    {
        int ans = 0, maxi = a[0];
        
        for(int i=1;i<a.size();i++)
        {
            ans = max(ans, maxi+a[i]-i);
            maxi = max(maxi, a[i]+i);
        }
        
        return ans;
    }
};