class Solution {
    vector<int> f_all;
    int cnt = 0;
    
    bool fun(string s)
    {
        vector<int> f(26, 0);
        for(int i=0;i<s.size();i++)
            f[s[i] - 'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(f[i]>0 && f_all[i]==0)
                return 0;
        }
        
        return 1;
    }
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        f_all.resize(26, 0);
        for(int i=0;i<allowed.size();i++)
            f_all[allowed[i]-'a']++;
        
        for(int i=0;i<words.size();i++)
        {
            if(fun(words[i]))
                cnt++;
        }
        
        return cnt;
    }
};