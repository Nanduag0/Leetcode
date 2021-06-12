class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) 
    {
        int vis[61] = {};
                
        for(int i=0;i<ranges.size();i++)
        {
            vis[ranges[i][0]]++;
            vis[ranges[i][1] + 1]--;
        }
        
        for(int i=1;i<=60;i++)
            vis[i] += vis[i-1];
        
        for(int i=left;i<=right;i++)
            if(vis[i] == 0)
                return 0;
        
        return 1;
    }
};