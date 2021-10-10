class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    { 
        bool f = (s+s).substr(1,2*s.size()-1).find(s)!=s.size()-1; 
        return f;
    }
};