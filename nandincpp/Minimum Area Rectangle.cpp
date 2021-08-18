class Solution {
public:
    int minAreaRect(vector<vector<int>>& p) 
    {
        int n = p.size(), ans = INT_MAX;
        map<int, set<int>> m;
        
        for(auto i : p)
            m[i[0]].insert(i[1]);
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                int x1 = p[i][0];
                int y1 = p[i][1];
                int x2 = p[j][0];
                int y2 = p[j][1];
                
                if(x1!=x2 && y1!=y2)
                {
                    if(m[x1].find(y2)!=m[x1].end() && m[x2].find(y1)!=m[x2].end())
                        ans = min(ans, abs(x1-x2)*abs(y1-y2));
                }
            }
        }
        
        return ans==INT_MAX ? 0 : ans;
    }
};