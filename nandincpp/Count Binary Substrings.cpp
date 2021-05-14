class Solution {
    int curr = 1, ans = 0, prev = 0;
public:
    int countBinarySubstrings(string s) 
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == s[i-1])
                curr++;
            
            else
            {
                ans += min(curr, prev);
                prev = curr;
                curr = 1;
            }
        }
        
        ans += min(curr, prev);
        return ans;
    }
};