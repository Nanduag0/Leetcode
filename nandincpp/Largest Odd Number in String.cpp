class Solution {
public:
    string largestOddNumber(string s) 
    {
        int n = s.size();
        int i = n-1;
        
        while(i>=0 && s[i]%2==0)
        {
            s.pop_back();
            i--;
        }
        
        return s;
    }
};