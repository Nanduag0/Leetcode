class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        vector<pair<int, int>> v;
        
        for(int i=0;i<score.size();i++)
        {
            v.push_back({score[i], i});
        }
        
        sort(v.rbegin(), v.rend());
        
        for(int i=0;i<score.size();i++)
            v[i].first = i+1;
        
        vector<string> ans(score.size());
        for(int i=0;i<score.size();i++)
        {
            ans[v[i].second] = to_string(v[i].first);
        }
        
        for(int i=0;i<score.size();i++)
        {
            if(ans[i] == "1")
                ans[i] = "Gold Medal";
            if(ans[i] == "2")
                ans[i] = "Silver Medal";
            if(ans[i] == "3")
                ans[i] = "Bronze Medal";
        }
        return ans;
    }
};