class Solution {
    int x = 0;
public:
    int minFlips(string s) 
    {
        for(int i=1;i<s.size();i++)
            if(s[i] != s[i-1])
                x++;
        
        return s[0]=='0' ? x : x+1;
    }
};