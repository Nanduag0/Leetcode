#define ll long long
class Solution {
    
    bool ok(vector<int>& a, int m, int k, ll mid)
    {
        int length = 0, boq_now = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] <= mid)
                length++;
            
            else
            {
                if(length >= k)
                    boq_now++;
                
                length = 0;
            }
            
            if(length >= k)
            {
                length = 0;
                boq_now++;
            }
        }
        
        if(length >= k)
            boq_now++;
        
        return boq_now >= m;
    }
    
public:
    int minDays(vector<int>& a, int m, int k)
    {
        if((ll)m*k > a.size())
            return -1;
        
        ll low = 1, high = *max_element(a.begin(), a.end());
        while(low <= high)
        {
            ll mid = low + (high-low)/2;
            
            if(ok(a, m, k, mid))
                high = mid-1;
            else
                low = mid+1;
        }
        
        return low;
    }
};