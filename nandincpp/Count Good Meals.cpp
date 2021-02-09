class Solution {
public:
    int countPairs(vector<int>& a)
    {
        map<int, int> m;
        sort(a.begin(), a.end());
        
        int ans = 0, mod = 1e9+7;
        
        for(auto &i : a)
        {
            for(int j=0;j<22;j++)
            {
                int power = 1<<j;
                int k = power - i;
                
                if(k > i)
                    break;
                
                ans += m[k];
                ans = ans % mod;
            }
            
            m[i]++;
        }
        
        return ans;
    }
};