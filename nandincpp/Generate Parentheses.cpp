class Solution {
    
    void fun(int o, int c, int n, vector<string> &ans, string s, int i)
    {
        if(i == 2*n)
        {
            ans.push_back(s);
            return ;
        }
        
        if(o < n)
            fun(o+1, c, n, ans, s+"(", i+1);
        if(c < o)
            fun(o, c+1, n, ans, s+")", i+1);
    }
    
public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        fun(0, 0, n, ans, "", 0);
        
        return ans;
    }
};