class Solution {
public:
    string minRemoveToMakeValid(string s)
    {
        int o = 0;
        string str = "";
        
        for(auto i : s)
        {
            if(i == '(')
                o++;
            
            else if(i == ')')
            {
                if(o == 0)
                    continue;
                o--;
            }
            
            str += i;
        }
        
        string result = "";
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='(' && o-->0)
                continue;
            
            result += str[i];
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};