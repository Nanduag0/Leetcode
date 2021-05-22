class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> s_freq(26, 0), t_freq(26, 0);
        
        for(auto i : s)
            s_freq[i - 'a']++;
        
        for(auto i : t)
            t_freq[i - 'a']++;
        
        int ans = 0;
        
        for(int i=0;i<26;i++)
        {
            if(s_freq[i] != t_freq[i])
                ans += abs(s_freq[i]-t_freq[i]);
        }
        
        return ans/2;
    }
};