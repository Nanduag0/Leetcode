class Solution {
    priority_queue<int> pq;
public:
    int furthestBuilding(vector<int>& h, int brick, int lad)
    {
        int n = h.size();
        int i;
        for(i=0;i<n-1;i++)
        {
            if(h[i+1] <= h[i])
                continue;
            
            int jump = h[i+1] - h[i];
            
        if(brick >= jump)
            {
                brick -= jump;
                pq.push(jump);
            }
          
        else if(lad > 0)
        {
            lad--;
            if(!pq.empty())
            {
                int x = pq.top();
                if(x > jump)
                {
                    pq.pop();
                    brick += x;
                    brick -= jump;
                    pq.push(jump);
                }
                    
            }
        }
        
            else
                break;
            
        }
        
        return i;
    }
};