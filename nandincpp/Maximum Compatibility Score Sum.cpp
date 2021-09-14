class Solution {
public:
    int maxCompatibilitySum(vector<vector<int>>& s, vector<vector<int>>& m)
    {
        vector<int> pos;
        for(int i=0;i<s.size();i++)
            pos.push_back(i);
        
        int ans = 0, cnt;
        while(next_permutation(pos.begin(), pos.end()))
        {
            cnt = 0;
            for(int i=0;i<s.size();i++)
            {
                for(int j=0;j<s[pos[i]].size();j++)
                    cnt += (m[i][j] == s[pos[i]][j]);
                ans = max(ans, cnt);
            }
        }
        
        return ans;
    }
};