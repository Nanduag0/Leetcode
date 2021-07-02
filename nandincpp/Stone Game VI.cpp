class Solution {
public:
    int stoneGameVI(vector<int>& a, vector<int>& b) 
    {
        int n = a.size();
        priority_queue<pair<int, int>> pq;
        
        for(int i=0;i<n;i++)
            pq.push({a[i]+b[i], i});
        
        bool who = 0;
        int alice = 0, bob = 0;
        
        while(!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            int i = p.second;
            
            if(!who)
            {
                alice += a[i];
            }
            
            else
                bob += b[i];
            
           who = !who;
        }
        
        if(alice > bob)
            return 1;
        if(alice == bob)
            return 0;
       // else
            return -1;
    }
};