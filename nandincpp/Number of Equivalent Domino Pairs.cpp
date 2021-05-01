class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) 
    {
        int ans = 0;
        map<pair<int, int>, int> m;
        
        for(int i=0;i<d.size();i++)
        {
            sort(d[i].begin(), d[i].end());
            
            if(m.count({d[i][0], d[i][1]}))
                ans += m[{d[i][0], d[i][1]}];
            
            m[{d[i][0], d[i][1]}]++;
        }
        
        return ans;
    }
};