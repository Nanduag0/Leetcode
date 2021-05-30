class Solution {
public:
    int minSpeedOnTime(vector<int>& d, double hour) 
    {
        int n = d.size();
        int ans = INT_MAX;
        int low = 1, high = 1e7+1;
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            double t = 0;
            
            for(int i=0;i<n-1;i++)
            {
               t += ceil((double)d[i]/(double)mid);
            }
            
            t += (double)d[n-1]/mid;
            
            if(t > hour)
                low = mid + 1;
            else
            {
                ans = min(mid, ans);
                high = mid ;
            }
        }
        
        if(low == 1e7+1)
            return -1;
        
        return ans;
    }
};