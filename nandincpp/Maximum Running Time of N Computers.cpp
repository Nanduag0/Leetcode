#define ll long long

class Solution {
    bool isposi(vector<int>&btry, ll mid, ll n)
    {
        ll tot_time = mid*n;
        
        for(ll i : btry)
            tot_time -= min(mid, i);
        
        return tot_time<=0;
    }
    
public:
    long long maxRunTime(int n, vector<int>& btry) 
    {
        ll low = 0, high = 0;
        for(int i=0;i<btry.size();i++)
            high += btry[i];
        
        ll ans = 0;
        while(low <= high)
        {
            ll mid = low + (high-low)/2;
            
            if(isposi(btry, mid, n))
            {
                low = mid + 1;
                ans = mid;
            }
            else
                high = mid - 1;
        }
        
        return ans;
    }
};