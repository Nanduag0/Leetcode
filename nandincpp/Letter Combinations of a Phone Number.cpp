class Solution {
    unordered_map <char, string>m;
    vector<string> ans;
    
    void helper(string &digit, int i, string &temp)
    {
        if(i == digit.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        string char_list = m[ digit[i] ];
        
        for(auto c : char_list)
        {
            temp.push_back(c);
            helper(digit, i+1, temp);
            temp.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digit)
    {
        if(digit == "")
            return {};
        
        m['1'] = "";
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        
        string temp = "";
        helper(digit, 0, temp);
        
        return ans;
    }
};