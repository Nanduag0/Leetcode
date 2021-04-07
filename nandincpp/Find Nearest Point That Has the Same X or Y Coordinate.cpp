class Solution {
    int dist(int x, int y, vector<int> point)
    {
        //int res = (x-point[0])*(x-point[0]) + (y-point[1])*(y-point[1]);
        int res = abs(x - point[0]) + abs(y - point[1]);
        return res;
    }
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p)
    {
        vector<pair<vector<int>, int>> temp;
        int n = p.size();
        
        for(int i=0;i<n;i++)
        {
            if(p[i][0]==x || p[i][1]==y)
                temp.push_back({p[i], i});
        }
        
        int ans, mini = INT_MAX;
        
        if(!temp.size())
            return -1;
        
        for(int i=0;i<temp.size();i++)
        {
            if(dist(x, y, temp[i].first) < mini)
            {
                mini = dist(x, y, temp[i].first);
                ans = temp[i].second;
            }
        }
        
        return ans;
    }
};