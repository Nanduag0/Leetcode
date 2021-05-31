class Solution {
    bool is_pal(string s, int i, int j)
    {
       // int i=0, j = s.size()-1;
        while(i < j)
        {
            if(s[i] != s[j])
                return 0;
            
            i++, j--;
        }
        return 1;
    }
public:
    bool validPalindrome(string s)
    {
       int i = 0, j = s.size()-1;
        while(i < j)
        {
            if(s[i] != s[j])
                return is_pal(s, i+1, j)||is_pal(s, i, j-1);
            i++, j--;
        }
        
        return 1;
    }
};