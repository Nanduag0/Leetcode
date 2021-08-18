class Solution {
    bool check(string x, string y)
    {
        if(x.size() != y.size())
            return 0;
        
        int n = x.size();
        for(int i=0;i<n;i++)
        {
            if(x[i] < y[i])
                return 0;
        }
        
        return 1;
    }
    
public:
    bool checkIfCanBreak(string s1, string s2) 
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        if(check(s1, s2) || check(s2, s1))
            return 1;
        return 0;
    }
};