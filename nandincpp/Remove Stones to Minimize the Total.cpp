class Solution {
public:
    int minStoneSum(vector<int>& p, int k) 
    {
        priority_queue<int> pq;
        for(auto i : p)
            pq.push(i);
        
        while(k--)
        {
            auto x = pq.top();
            pq.pop();
            
            x -= x/2;
            pq.push(x);
        }
        
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        
        return ans;
    }
};