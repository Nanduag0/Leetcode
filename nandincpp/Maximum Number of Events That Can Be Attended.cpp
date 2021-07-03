class Solution {
public:
    int maxEvents(vector<vector<int>>& events)
    {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int ans = 0, i = 0;
        int n = events.size();
        
        for(int d=1;d<100005;d++)
        {
            while(!pq.empty() && pq.top()<d)
                pq.pop();
            
            while(i<n && d==events[i][0])
            {
                pq.push(events[i][1]);
                i++;
            }
            
            if(!pq.empty())
            {
                ans++;
                pq.pop();
            }
        }
        
        return ans;
    }
};