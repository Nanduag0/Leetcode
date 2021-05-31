class Solution {
    string fun(int x)
    {
        string t = "";
        
        while(x)
        {
            t += to_string(x&1);
            x /= 2;
        }
        reverse(t.begin(), t.end());
        return t;
    }
    
public:
    bool queryString(string s, int n)
    {
        for(int i=1;i<=n;i++)
        {
            if(s.find(fun(i)) == string::npos)
                return 0;
        }
        return 1;
    }
};