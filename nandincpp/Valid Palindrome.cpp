class Solution {
    bool is_pal(string s)
    {
        int i=0, j = s.size()-1;
        while(i < j)
        {
            if(s[i] != s[j])
                return 0;
            
            i++, j--;
        }
        return 1;
    }
public:
    bool isPalindrome(string s) 
    {
        string ss = "";
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                ss += s[i];
            else if(isalpha(s[i]))
            {
                if(s[i]>='A' && s[i]<='Z')
                    ss += (s[i] | ' ');
                else
                    ss += s[i];
            }
        }
        
        s = ss;
        return is_pal(s);
    }
};