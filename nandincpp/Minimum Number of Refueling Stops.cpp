class Solution {
public:
    int minRefuelStops(int target, int start, vector<vector<int>>& stations) 
    {
        if(start >= target)
            return 0;
        
        priority_queue<int> pq;
        int i = 0, ans = 0;
        
        while(start < target)
        {
            while(i<stations.size() && start-stations[i][0]>=0)
            {
                pq.push(stations[i][1]);
                i++;
            }
            
            if(pq.empty())
                return -1;
            
            start += pq.top();
            pq.pop();
            ans++;
        }
        
        return ans;
    }
};