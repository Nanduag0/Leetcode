class Solution {
public:
    int findTheLongestSubstring(string s) 
    {
        int mask = 0;
        string vowel = "aeiou";
        
        unordered_map<int, int> m;
        m[0] = -1;
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
        {
            for(int j=0;j<5;j++)
            {
                if(s[i] == vowel[j])
                    mask ^= (1 << j);
            }
            
            if(m.count(mask))
                ans = max(ans, i-m[mask]);
            else
                m[mask] = i;
        }
        
        return ans;
    }
};