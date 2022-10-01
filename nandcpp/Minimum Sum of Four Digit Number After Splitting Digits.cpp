class Solution {
public:
    int minimumSum(int n)
    {
        string s = to_string(n);        
        sort(s.begin(), s.end());
        
        int ans = (s[0]-'0' + s[1]-'0')*10 + (s[2]-'0' + s[3]-'0');
        return ans;
    }
};