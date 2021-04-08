class Solution {
    
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths)
    {
        unordered_map<int, vector<int>> m;
        vector<int> ans(n);
        
        for(auto i : paths)
        {
            m[i[0]].push_back(i[1]);
            m[i[1]].push_back(i[0]);
        }
        
        for(int i=1;i<=n;i++)
        {
            vector<bool> col(5, 0);
            
            for(auto a : m[i])
            {
                col[ans[a-1]] = 1;
            }
            
            for(int j=1;j<=4;j++)
            {
                if(col[j] == 0)
                {
                    ans[i-1] = j;
                    break;
                }
            }
        }
        return ans;
    }
};