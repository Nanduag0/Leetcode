class Solution {
    
    int dist(int x1, int x2, int y1, int y2)
    {
        int d = 0;
        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        
        return d;
    }
    
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) 
    {
        int n = q.size(), ps = p.size();
        vector<int> ans(n, 0);
        int i = 0;
        
        while(i < n)
        {
            for(int j=0;j<ps;j++)
            {
                if(dist(p[j][0], q[i][0], p[j][1], q[i][1]) <= (q[i][2]*q[i][2]))
                    ans[i]++;
            }
            i++;
        }
        
        return ans;
    }
};