class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) 
    {
        unordered_map<string, string> m;
        
        for(int i=0;i<knowledge.size();i++)
        {
            m[knowledge[i][0]] = knowledge[i][1];
        }
        
        string stk = "";
        int i = 0;
        while(i < s.size())
        {
            if(s[i] == '(')
            {
                i++;
                string temp = "";
                
                while(i<s.size() && s[i]!=')')
                {
                    temp += s[i++];
                }
                
                if(m.count(temp))
                    stk += m[temp];
                else 
                    stk += '?';
            }
            
            else
                stk += s[i];
            
            i++;
        }

        return stk;
    }
};