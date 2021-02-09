class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k)
    {
        vector<int> ans;
        int n = a.size();
        priority_queue<pair<int, int>> pq;
        
        for(int i=0;i<n;i++)
        {
            while(!pq.empty() && pq.top().second<=(i-k))
                pq.pop();
            
            pq.push({a[i], i});
            
            if(i >= k-1)
                ans.push_back(pq.top().first);
        }
        
        return ans;
    }
};