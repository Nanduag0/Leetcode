class Solution {
    deque<int> minq, maxq;
public:
    int longestSubarray(vector<int>& a, int limit) 
    {
        int n = a.size();
        int ans = 0, s = 0, e = 0;
        
        while(e < n)
        {
            int now = a[e];
            
            while(!minq.empty() && a[minq.back()]>=now)
                minq.pop_back();
            minq.push_back(e);
            
            while(!maxq.empty() && a[maxq.back()]<=now)
                maxq.pop_back();
            maxq.push_back(e);
            
            int max_here = a[maxq.front()], min_here = a[minq.front()];
            
            if(max_here - min_here > limit)
            {
                s++;
                if(s > maxq.front())
                    maxq.pop_front();
                if(s > minq.front())
                    minq.pop_front();
            }
            
            else
            {
                ans = max(ans, e-s+1);
                e++;
            }
        }
        return ans;
    }
};