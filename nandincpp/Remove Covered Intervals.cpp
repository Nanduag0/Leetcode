class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end());
        
        int left = -1, right = -1, ans = 0;
        
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>left && intervals[i][1]>right)
            {
                ans++;
                left = intervals[i][0];
            }
            
            right = max(intervals[i][1], right);
        }
        
        return ans;
    }
};