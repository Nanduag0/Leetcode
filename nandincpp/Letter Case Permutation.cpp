class Solution {
    vector<string> ans;
    
    void helper(int i, string temp, string &s)
    {
        if(temp.size() == s.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        if(s[i]>='0' && s[i]<='9')
            helper(i+1, temp+s[i], s);
        
        else
        {
            helper(i+1, temp+(char)(toupper(s[i])), s);
            helper(i+1, temp+(char)(tolower(s[i])), s);
        }
    }
public:
    vector<string> letterCasePermutation(string s)
    {
        string temp = "";
        
        helper(0, temp, s);
        return ans;
    }
};