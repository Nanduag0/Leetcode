class Solution {
    bool help(string s, string s1)
    {
        int ans = 0;
        int i = 0, j = 0, n = s.size(); 
        bool flag = 0;
        
        while(i<n && j<s1.size())
        {            
            if(s[i] != s1[j])
                i++;
            else if(s[i] == s1[j])
                i++, j++;
        }
        
       if(j == s1.size())
           return 1;
        
        return 0;
    }
    
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int res = 0;
        unordered_map<string, int> m;
        
        for(auto i : words)
            m[i]++;
        
        for(auto i : m)
        {
            if(help(s, i.first))
            {
                res += i.second;
            }
        }
        
        return res;
    }
};