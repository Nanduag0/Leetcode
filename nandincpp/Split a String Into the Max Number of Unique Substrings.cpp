class Solution {
    unordered_set<string> sset;
    int ans = 0;
    
    void help(int idx, string s)
    {
        if(idx == s.size())
        {
            ans = max(ans, (int)sset.size());
            return ;
        }
        
        string temp = "";
        for(int i=idx;i<s.size();i++)
        {
            temp += s[i];
            
            if(!sset.count(temp))
            {
                sset.insert(temp);
                help(i+1, s);
                sset.erase(temp);
            }
        }
    }
    
public:
    int maxUniqueSplit(string s) 
    {
        help(0, s);
        return ans;
    }
};