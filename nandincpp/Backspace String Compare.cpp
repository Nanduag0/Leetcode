class Solution {
    string check(string s)
    {
        string temp = "";
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '#')
            {
                if(temp.size()!=0)
                    temp.pop_back();
            }
            else
                temp += s[i];
        }
        return temp;
    }
    
public:
    bool backspaceCompare(string s, string t)
    {
        s = check(s);
        t = check(t);
        
        return (s==t);
    }
};