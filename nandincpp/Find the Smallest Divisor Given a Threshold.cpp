#define ll long long
class Solution {
    
    ll sum(vector<int> &a, int d)
    {
        ll s = 0;
        for(auto i : a)
        {
            ll val = (i/d) + ((i%d) != 0);
            s += val;
        }
        
        return s;
    }
    
public:
    int smallestDivisor(vector<int>& a, int threshold)
    {
        ll low = 1, high = *max_element(a.begin(), a.end())+1;
        
        while(low <= high)
        {
            ll mid = low + (high-low)/2;
           ll sum_till_now = sum(a, mid);
            
            if(sum_till_now > (ll)threshold)
                low = mid + 1;
            else
                high = mid - 1;
        }
        
        return (int)low;
    }
};