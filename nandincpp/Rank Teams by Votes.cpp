class Solution {
public:
    string rankTeams(vector<string>& votes) 
    {
        int n = votes[0].size();
        string ans = votes[0];
        
        vector<vector<int>> freq(26, vector<int> (n));
        
        for(auto i : votes)
        {
            for(int j=0;j<n;j++)
            {
                freq[i[j]-'A'][j]++;
            }
        }
        
        sort(ans.begin(), ans.end(), [&](auto& x, auto& y)
             {
                if(freq[x-'A'] == freq[y-'A'])
                    return x<y;
                 
                 return freq[x-'A'] > freq[y-'A'];
             });
        
        return ans;
    }
};