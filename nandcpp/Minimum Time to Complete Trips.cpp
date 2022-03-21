class Solution {
    long long trip(vector<int>& time, long long mid)
    {
        long long treep = 0;
        for(auto i : time)
            treep += mid/i;
        
        return treep;
    }
    
public:
    long long minimumTime(vector<int>& time, int totalTrips) 
    {
        long long low = 1, high = 1e14+1;
        long long ans;
        while(low < high)
        {
            long long mid = low + (high-low)/2;
            if(trip(time, mid) < totalTrips)
                low = mid + 1;
            else
            {
                high = mid;
            }
        }
        
        return low;
    }
};