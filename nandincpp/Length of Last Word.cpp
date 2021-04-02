class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size();
        int last = n-1, ans = 0;
        
        while(last>=0 && s[last]==' ')
            last--;
        
        while(last>=0 && s[last]!=' ')
        {
            last--;
            ans++;
        }
        return ans;
    }
};