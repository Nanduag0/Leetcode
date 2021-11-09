#define ll long long

class Solution {
    const int mod = 1e9 + 7;
public:
    int maxSumMinProduct(vector<int>& a) 
    {
        int n = a.size();
        vector<ll> left(n, -1), right(n, -1);
        vector<ll> s; // stack
        
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && a[i]<=a[s.back()])
                s.pop_back();
            
            if(!s.empty())
                left[i] = s.back();
            s.push_back(i);
        }
        
        s.clear();
        
        for(int i=n-1;i>=0;i--)
        {
           while(!s.empty() && a[i]<=a[s.back()])
                s.pop_back();
            
            if(!s.empty())
                right[i] = s.back();
            s.push_back(i); 
        }
        
        vector<ll> pref(n, 0);
        pref[0] = a[0];
        
        for(int i=1;i<n;i++)
        {
            pref[i] = pref[i-1] + a[i];  // prefix sum
        }
        
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll sum = right[i]==-1 ? pref.back() : pref[right[i]-1];
            
            if(left[i] != -1)
                sum -= pref[left[i]];
            
            ans = max(ans, (ll)a[i]*sum);
        }
        
        return ans%mod;;
    }
};