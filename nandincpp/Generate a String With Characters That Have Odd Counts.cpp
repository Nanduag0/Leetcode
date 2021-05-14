class Solution {
public:
    string generateTheString(int n) 
    {
        string s;
        if(n & 1)
        {
           // string s;
            s = string(n, 'x');
        }
        
        else
        {
            s = string(n-1, 'x');
            s += 'u';
        }
        return s;
    }
};