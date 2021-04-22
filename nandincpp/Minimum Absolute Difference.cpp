class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) 
    {
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        
        int mini = INT_MAX;
        int n = a.size();
        
        for(int i=1;i<n;i++)
        {
            mini = min(mini, abs(a[i]-a[i-1]));
        }
        
        for(int i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1]) == mini)
                ans.push_back({a[i-1], a[i]});
        }
        
        return ans;
    }
};