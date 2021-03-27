class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, cnt = 0, j = 0;
        int n1 = t.size();
        
        while(j < n1)
        {
            if(s[i] == t[j])
            {
                cnt++;
                i++;
            }
            j++;
        }
        
        int n2 = s.size();
        if(cnt == n2)
            return 1;
        
        return 0;
    }
};