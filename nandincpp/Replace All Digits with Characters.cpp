class Solution {
    
public:
    string replaceDigits(string s) 
    {
        int n = s.size();
        if(n == 0)
            return s;
        
        for(int i=1;i<n;i++)
        {
            if(isdigit(s[i]))
            {
                s[i] += s[i-1] - '0';
            }
        }
        return s;
    }
};