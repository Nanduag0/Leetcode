class Solution {
public:
    int removePalindromeSub(string s) 
    {
        if(s.size() == 0)
            return 0;
        
        int i = 0, j = s.size()-1;
        bool flag = 1;
        
        while(i <= j)
        {
            if(s[i] != s[j])
            {
                flag = 0;
                break;
            }
            i++, j--;
        }
        
        if(!flag)
            return 2;
        return 1;
        
    }
};