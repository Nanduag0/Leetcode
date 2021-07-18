class Solution {
public:
    int addRungs(vector<int>& rungs, int dist)
    {
        int cnt = 0;
        int prev = 0;
        
        for(int i=0;i<rungs.size();i++)
        {
            int diff = rungs[i] - prev;
            
            if(diff > dist)
            {
                cnt += (diff%dist == 0) ? (diff / dist)-1 : (diff / dist);
            }
            
            prev = rungs[i];
        }
        
        return cnt;
    }
};