#define ll long long
const int mod = 1e9 + 7;

class Solution {
    
public:
    int threeSumMulti(vector<int>& a, int target)
    {
        vector<ll> freq(101, 0);
        for(auto i : a)
            freq[i]++;
        
        ll ans  = 0;
        
        for(int i=0;i<101;i++)
        {
            for(int j=i;j<101;j++)
            {
                int k = target - (i + j);
                
                if(k<0 || k>100)
                    continue;
                
                if(i == j && j == k)
                {
                    ans += ( (freq[i])*(freq[i]-1)*(freq[i]-2)/6 );
                    ans %= mod;
                }
                else if(i == j && j != k)
                {
                    ans += ( (freq[i])*(freq[i]-1)*(freq[k])/2 );
                    ans %= mod;
                }
                else if(i < j && j < k)
                {
                    ans += ( freq[i]*freq[j]*freq[k] );
                    ans %= mod;
                }
            }
        }
        
        return (int)ans;
    }
};