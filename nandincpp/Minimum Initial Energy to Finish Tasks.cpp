class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) 
    {
        sort(tasks.begin(), tasks.end(), [&](auto &x, auto &y)
             {
                return x[1]-x[0] > y[1]-y[0]; 
             });
        
        int ans = 0, left = 0;
        
        for(int i=0;i<tasks.size();i++)
        {
            if(left < tasks[i][1])
            {
                ans += (tasks[i][1] - left);
                left += (tasks[i][1] - left);
            }
            
            left -= tasks[i][0];
        }
        
        return ans;
    }
};