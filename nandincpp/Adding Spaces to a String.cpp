class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        int i = 0, j = 0;
        string ans = "";
        
        while(i<s.size() && j<spaces.size())
        {
            if(i == spaces[j])
            {
                ans += " ";
                ans += s[i];
                i++, j++;
            }
            
            else
            {
                ans += s[i];
                i++;
            }
        }
        
        if(i != s.size())
        {
            for(;i<s.size();i++)
                ans += s[i];
        }
        
        return ans;
    }
};