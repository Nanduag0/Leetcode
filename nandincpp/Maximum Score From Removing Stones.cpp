class Solution {
public:
    int maximumScore(int a, int b, int c)
    {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        int cnt = 0;
        
        while(pq.size() > 1)
        {
            int t1 = pq.top();
            pq.pop();
            int t2 = pq.top();
            pq.pop();
            
            if(t1>0 && t2>0)
                cnt++;
            
            t1--, t2--;
            
            if(t1 > 0)
                pq.push(t1);
            if(t2 > 0)
                pq.push(t2);
            
        }
        
        return cnt;
    }
};