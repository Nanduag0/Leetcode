class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) 
    {
        priority_queue<pair<double , pair<int, double> > > pq;
        
        int n = pos.size();
        if(n == 0)
            return 0;
        
        for(int i=0;i<n;i++)
        {
            double time = (double)(target-pos[i])/speed[i];
            
            pq.push({pos[i], {speed[i], time}});
        }
        
        int ans = 0;
        while(1)
        {
            if(pq.size() == 1)
            {
                ans++;
                break;
            }
            
            auto p1 = pq.top();
            pq.pop();
            auto p2 = pq.top();
            pq.pop();
            
            if(p1.second.second >= p2.second.second)
                pq.push(p1);
            else
            {
                ans++;
                pq.push(p2);
            }
        }
        
        return ans;
    }
};