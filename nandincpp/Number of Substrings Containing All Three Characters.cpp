class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        vector<int> count(3, 0);
        int i = 0, j = 0;
        int ans = 0, n = s.size();
        
        while(j < n)
        {
            count[s[j] -'a']++;
            while(count[0] && count[1] && count [2])
            {
                //j++;
                ans += n-j;
                count[s[i] - 'a']--;
                i++;
            }
            
            j++;
        }
        
        return ans;
    }
};