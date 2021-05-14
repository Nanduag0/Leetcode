class Solution {
    
    int bs(int low, int high, vector<vector<int>>& intervals, int target)
    {
        int ans = INT_MIN;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(intervals[mid][0] < target)
                low = mid+1;
            
            else
            {
                ans = intervals[mid][0];
                high = mid-1;
            }
        }
        return ans;
    }
    
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals)
    {
        map<int, int> m;
        int n = intervals.size();
        
        for(int i=0;i<n;i++)
        {
            m[intervals[i][0]] = i;
        }
        
        sort(intervals.begin(), intervals.end(),[&](auto x, auto y)
             {
                return x[0]<y[0]; 
             });
        
        vector<int> ans(n, -1);
        for(int i=0;i<n-1;i++)
        {
            int temp = bs(i, n-1, intervals, intervals[i][1]);
            
            if(temp != INT_MIN)
                ans[m[intervals[i][0]]] = m[temp];
        }
        
        return ans;
    }
};