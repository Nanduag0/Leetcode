class Solution {
    bool check(string s, string pattern)
    {
        int j = 0;
        for(int i=0;i<s.size();i++)
        {
            if(j<pattern.size() && pattern[j]==s[i])
                j++;   
            
            else if(s[i] < 'a')
                return 0;
        }
        
        return j==pattern.size();
    }
    
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern)
    {
        vector<bool> ans;
        for(auto i : queries)
        {
            ans.push_back(check(i, pattern));
        }
        
        return ans;
    }
};