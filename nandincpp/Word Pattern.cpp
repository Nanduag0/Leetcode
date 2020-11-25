//important question!!!

class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        stringstream ss(s);
        string str;
        
        vector<string> v;
        
        while(getline(ss,str,' '))
            v.push_back(str);
        
        if(v.size() != pattern.size())
            return false;
        
        map<char, string> m1;
        map<string, char> m2;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(m1.count(pattern[i]) > 0)
            {
                if(m1[pattern[i]] != v[i])
                return false;
            }
            
            if(m2.count(v[i]) > 0)
            {
                if(m2[v[i]] != pattern[i])
                return false;
            }
            
            m1[pattern[i]] = v[i];
            m2[v[i]] = pattern[i];
        }
        
        return true;
    }
};