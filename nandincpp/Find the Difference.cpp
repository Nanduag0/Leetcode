class Solution {
public:
    char findTheDifference(string s, string t)
    {
        int s_sum = 0, t_sum = 0;
        
        for(int i=0;i<s.size();i++)
            s_sum += (s[i]-'a');
        for(int i=0;i<t.size();i++)
            t_sum += (t[i]-'a');
        
        int ans = t_sum - s_sum;
        return (ans + 'a');
    }
};