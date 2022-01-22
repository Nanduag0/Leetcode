class Solution {
public:
    bool checkString(string s) 
    {
        bool flag = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(flag && s[i]=='a')
                return 0;
            if(s[i] == 'b')
                flag = 1;
        }
        
        return 1;
    }
};