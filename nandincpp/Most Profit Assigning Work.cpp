class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& profit, vector<int>& ability) 
    {
        sort(ability.begin(), ability.end());
        vector<pair<int, int>> v;
        
        for(int i=0;i<diff.size();i++)
            v.push_back({diff[i], profit[i]});
        
        sort(v.begin(), v.end());
        
        int prev = 0, maxi = 0, j = 0, n = ability.size();
        
        for(int i=0;i<n;i++)
        {
            while(j<n && v[j].first<=ability[i])
            {
                prev = max(prev, v[j].second);
                j++;
            }
            
            maxi += prev;
        }
        
        return maxi;
    }
};