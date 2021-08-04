#define ll long long
class Solution {
    int fun(vector<int>& a, vector<int>& b)
    {
        unordered_map<int, int> m;
        
        for(auto i : a)
            m[i]++;
        
        ll ans = 0;
        for(auto i : b)
        {
            ll target = (ll)i*i;            
            for(auto j : m)
            {
                ll num = j.first;
                ll many = j.second;
                
                if(target % num!=0 || !m.count(target / num))
                    continue;
                else if(target / num == num)
                    ans += many * (many-1);
                else
                    ans += many * m[target / num];
            }
        }
        
        return (int)ans/2;
    }
    
public:
    int numTriplets(vector<int>& a, vector<int>& b)
    {
        return fun(a, b) + fun(b, a);
    }
};