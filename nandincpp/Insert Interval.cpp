class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& neww) 
    {
        vector<vector<int>> ans;
        
        int n = intervals.size(), i = 0;
        int l = neww[0], r = neww[1];
        
        while(i<n && intervals[i][1]<l)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        
        while(i<n && max(l, intervals[i][0])<=min(r, intervals[i][1]))
        {
            l = min(l, intervals[i][0]), r = max(r, intervals[i][1]);
            i++;
        }
        ans.push_back({l, r});
        
        while(i < n)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        
        return ans;
    }
};