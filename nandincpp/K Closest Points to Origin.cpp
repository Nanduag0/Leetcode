class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        multimap<int,int> mp;
        int temp;
        
        for(int it=0;it<points.size();it++)
        {
            temp = points[it][0]*points[it][0] + points[it][1]*points[it][1];
            mp.insert({temp, it});
        }
        
        int cnt = 0;
        vector<vector<int>> ans;
        
        for(auto it=mp.begin();cnt<k;it++,cnt++)
        {
            ans.push_back(points[it->second]);
        }
        
        return ans;
    }
        
    
};