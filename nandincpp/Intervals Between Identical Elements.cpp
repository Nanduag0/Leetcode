#define ll long long

class Solution {
public:
    vector<long long> getDistances(vector<int>& a) 
    {
        unordered_map<ll, vector<ll>> m;
        for(int i=0;i<a.size();i++)
        {
            m[a[i]].push_back(i);
        }
        
        int N = a.size();
        vector<long long> res(N, -1);
        
        
        for(auto mp : m)
        {
            vector<ll> v = mp.second;
            ll n = v.size();
            
            vector<ll> pref(n+1, 0);
            for(ll i=1;i<=n;i++)
            {
                pref[i] = pref[i-1] + v[i-1];
            }

            for(int i=0;i<n;i++)
            {
                if(res[v[i]] != -1)
                    continue;
                
                ll left1 = i;
                ll right1 = n - i - 1;
                ll left2 = pref[i];
                ll right2 = pref[n] - pref[i+1];

                ll ans = (left1 - right1)*v[i] + (right2 - left2);
                res[v[i]] = ans;
            }
        }
        
        return res;
    }
};