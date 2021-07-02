#define ll long long
class Solution {
    bool helper(string x, ll target)
    {
        if(stoull(x) == target)
            return 1;
        for(int i=1;i<x.size();i++)
        {
            if(stoull(x.substr(0, i)) != target)
                continue;
            
            if(helper(x.substr(i, x.size()-i), target-1))
                return 1;
        }
        return 0;        
    }
    
public:
    bool splitString(string s) 
    {
        for(int i=1;i<s.size();i++)
        {
            ll target = stoull(s.substr(0, i));
            
            if(helper(s.substr(i, s.size()-i), target-1))
                return 1;
        }
        
        return 0;
    }
};