class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        vector<int> cnt(26, 0);
        for(auto i : s)
            cnt[i-'a']++;
        
        int prev = -1;
        for(int i=0;i<26;i++)
        {
            if(cnt[i] == 0)
                continue;
            
            if(prev!=cnt[i] && prev!=-1)
                return 0;
            prev = cnt[i];
        }
        
        return 1;
    }
};