class Solution {
public:
    string removeOccurrences(string s, string part)
    {
        int x = part.size();
        int y = s.size();
        
        while(s.find(part) != string::npos)
        {
            int idx = s.find(part);
            
            s = s.substr(0, idx) + s.substr(idx+x, y);
        }
        
        return s;
    }
};