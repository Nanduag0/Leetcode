class Solution {
public:
    bool canConstruct(string s, int k) 
    {
        int n = s.size();
        if(n < k)
            return 0;
        
        vector<int> f(26, 0);
        for(int i=0;i<n;i++)
            f[s[i] - 'a']++;
        
        int odd = 0;
        
        for(auto i : f)
            if(i&1)
                odd++;
        
        if(odd > k)
            return 0;
        return 1;
    }
};