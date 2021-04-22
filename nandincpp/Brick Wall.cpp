class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) 
    {
        map<int, int> m;
        int left = INT_MIN;
        
        for(int i=0;i<wall.size();i++)
        {
            int sum = 0;
            for(int j=0;j<wall[i].size()-1;j++)
            {
                sum += wall[i][j];
                m[sum]++;
            }
        }
        
        
        for(auto i : m)
            left = max(left, i.second);
        
        int n = wall.size();
        return (left==INT_MIN) ? n : n-left;
    }
};