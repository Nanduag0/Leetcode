class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        unordered_map<int, int> m;
        for(auto i : deck)
            m[i]++;
        
        int ans = -1;
        for(int i=0;i<10001;i++)
        {
            if(m[i])
            {
                if(ans == -1)
                    ans = m[i];
                else
                    ans = __gcd(ans, m[i]);
            }
        }
        
        return ans >= 2;
    }
};