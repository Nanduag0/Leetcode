#define ll long long
class Solution {
    const int mod = 1e9 + 7;
    ll get_sum(ll r, ll l)
    {
        return (r-l)*(r+1+l)/2;
    }
public:
    int maxProfit(vector<int>& a, int order) 
    {
        sort(a.rbegin(), a.rend()); // ulta sort
        ll cnt = 0, sum = 0;
        
        int n = a.size();
        for(int i=0;i<n;i++)
        {
            cnt++;
            
            ll now = a[i];
            ll next = (i==n-1) ? 0 : a[i+1];
            ll diff = now - next;
            
            if(cnt*diff <= order)
            {
                sum = (sum + (ll)cnt*get_sum(now, next) )%mod;
               // sum %= mod;
                order -= cnt*diff;
            }
            
            else
            {
                ll distribute = order/cnt;
                ll rem = order%cnt;
                
                sum = ( sum + (ll)cnt*get_sum(now, now-distribute) )%mod;
                sum = ( sum + (ll)rem*(now-distribute) )%mod;
                break;
            }
        }
        
        return (int)sum;
    }
};