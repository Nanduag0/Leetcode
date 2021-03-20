class Solution {
    vector<int> vis;
    
    void dfs(vector<vector<int>> rooms, int now)
    {
        vis[now] = 1;
        
        for(auto i : rooms[now])
        {
            if(!vis[i])
            {
                vis[i] = 1;
                dfs(rooms, i);
            }
        }
    }
    
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int n = rooms.size();
        vis.resize(n, 0);
        
        vis[0] = 1;
        dfs(rooms, 0);
        
        for(auto i : vis)
            if(!i)
                return 0;
        
        return 1;                
    }
};