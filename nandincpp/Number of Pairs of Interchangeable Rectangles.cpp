class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& r) 
    {
        unordered_map<double, long long> m;
        long long ans = 0;
        
        for(int i=0;i<r.size();i++)
        {
            double temp = (double)r[i][0]/r[i][1];
            
            if(m.count(temp))
                ans += m[temp];
            
            m[temp]++;
        }
        
        return ans;
    }
};