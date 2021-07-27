#define ll long long
class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& seg) 
    {
        map<int, ll> m;
        for(auto i : seg)
        {
            m[i[0]] += i[2];
            m[i[1]] -= i[2];
        }
        
        vector<vector<long long>> ans;
        int i = 0;
        
        for(auto x : m)
        {
            if(m[i] > 0)
                ans.push_back({i, x.first, m[i]});
            
            m[x.first] += m[i];
            i = x.first;
        }
        
        return ans;
    }
};