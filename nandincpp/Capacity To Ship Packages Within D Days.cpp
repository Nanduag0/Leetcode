class Solution {
    bool check(int mid, vector<int> &w, int D)
    {
        int day = 1, n = w.size(), tot = 0;
        bool valid = 1;
        
        for(int i=0;i<n;i++)
        {
            if(w[i] > mid)
                valid = 0;
            if(w[i]+tot <= mid)
                tot += w[i];
            else
            {
              day++;
                tot = w[i];
            }
        }
        
        if(!valid)
            return 0;
        return day <= D;
    }
    
public:
    int shipWithinDays(vector<int>& w, int D)
    {
        int high = 5*10000*500, low = 1;
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            
            if(check(mid,w,D))
                high = mid;
            else
                low = mid+1;
        }
        
        return high;
    }
};