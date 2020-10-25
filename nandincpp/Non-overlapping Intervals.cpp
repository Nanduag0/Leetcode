class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& interval) 
    {
        int left = 0,right = 1, n = interval.size();
        int cnt = 0;
        
        sort(interval.begin(), interval.end());
        
        while(right < n)
        {
            if(interval[left][1] <= interval[right][0])
            {
                left = right;
                right++;
            }
            
            else if(interval[left][1] > interval[right][1])
            {
                cnt++;
                left = right;
                right++;
            }
            
            else if(interval[left][1] <= interval[right][1])
            {
                cnt++;
                right++;
            }
        }
        return cnt;
    }
};