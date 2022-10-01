class Solution {
public:
    vector<int> maxSubsequence(vector<int>& a, int k)
    {
        vector<pair<int, int>> v;
        for(int i=0;i<a.size();i++)
            v.push_back({a[i], i});
        
        sort(v.rbegin(), v.rend());
        vector<pair<int, int>> ans;
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i]);
        }
        
        vector<int> res;
        sort(ans.begin(), ans.end(), [&](auto& x, auto& y)
             {
                 return x.second<=y.second;
             });
        
        for(int i=0;i<ans.size();i++)
            res.push_back(ans[i].first);

        return res;
    }
};