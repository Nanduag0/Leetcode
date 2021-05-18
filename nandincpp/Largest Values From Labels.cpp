class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) 
    {
        int n = labels.size();
        
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({values[i], labels[i]});
        }
        
        sort(v.begin(), v.end(), greater<pair<int,int>>());
        
        unordered_map<int, int> m;
        int ans = 0, koto = 0;
            
        for(int i=0;i<n;i++)
        {
            if(m[v[i].second] >= use_limit)
                continue;
            m[v[i].second]++;
            
            ans += v[i].first;
            
            koto++;
            if(koto == num_wanted)
                break;
        }
        
        return ans;
    }
};