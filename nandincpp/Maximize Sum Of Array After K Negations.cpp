class Solution {
public:
    int largestSumAfterKNegations(vector<int>& a, int k) 
    {
        priority_queue<int, vector<int>, greater<int>> pq(a.begin(), a.end());
        
        while(k--)
        {
            auto p = pq.top();
            pq.pop();
            pq.push(-1 * p);
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