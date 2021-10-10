class Solution {
public:
    int repeatedStringMatch(string a, string b) 
    {
        int cnt = 0;
        string s = "";
        
        while(s.size() < b.size())
        {
            cnt++;
            s += a;
        }
        
        if(s.find(b) != string::npos)
            return cnt;
        
        s += s;
        cnt++;
        if(s.find(b) != string::npos)
            return cnt;
        
        return -1;
    }
};