class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& mat) 
    {
        unordered_map<string, int> m;
        
        for(int i=0;i<mat.size();i++)
        {
            string s(mat[0].size(), 'X');
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][0] != mat[i][j])
                    s[j] = 'O';
            }
            
            m[s]++;
        }
        
        int ans = 0;
        for(auto i : m)
            ans = max(ans, i.second);
        return ans;
    }
};