class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int target) 
    {
        int n = times.size();
        
        for(int i=0;i<n;i++)
            times[i].push_back(i);
        sort(times.begin(), times.end());
        
        priority_queue<int, vector<int>, greater<int>> chair_pq;
        for(int i=0;i<n;i++)
            chair_pq.push(i);
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> time_pq;
        for(auto i : times)
        {
            int arrival = i[0];
            int dept = i[1];
            int index = i[2];
            
            while(!time_pq.empty() && time_pq.top().first<=arrival)
            {
                auto p = time_pq.top();
                time_pq.pop();
                chair_pq.push(p.second);
            }
            
            int now = chair_pq.top();
            chair_pq.pop();
            time_pq.push({dept, now});
            
            if(index == target)
                return now;
        }
        
        return -1;
    }
};