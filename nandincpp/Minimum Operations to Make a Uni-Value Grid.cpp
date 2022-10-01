class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> a;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                a.push_back(grid[i][j]);
            }
        }
        
        sort(a.begin(), a.end());
        
        int target = a[(m*n) / 2];
        int ans = 0;
        
        for(auto i : a)
        {
            if(abs(i-target)%x != 0)
                return -1;
            
            ans += abs(i-target)/x;
        }
        
        return ans;
    }
};