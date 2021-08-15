class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) 
    {
        string temp = "";
        for(int i=0;i<words.size();i++)
        {
            temp += words[i];
            
            if(temp == s)
                return 1;
        }
        
        return 0;
    }
};