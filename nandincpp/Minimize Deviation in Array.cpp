class Solution {
public:
    int minimumDeviation(vector<int>& a)
    {
        priority_queue<int> pq;
        int mini = INT_MAX;
        
        for(auto &i : a)
        {
            if(i&1)
            {
                i = i * 2;
            }
            pq.push(i);
            mini = min(mini, i);
        }
        
        int diff = INT_MAX;
       // int maxi;
        
        while(pq.top()%2 == 0)
        {
            int maxi = pq.top();
            pq.pop();
            diff = min(diff, maxi-mini);
            
            mini = min(mini, maxi/2);
            pq.push(maxi/2);
        }
        
        return min(diff, pq.top()-mini);
    }
};