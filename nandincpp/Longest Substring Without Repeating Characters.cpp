class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.size() == 0)
            return 0;
        
        int i=0,j=0,n=s.size();
        
        vector<int> count(500,0);
        int ans = 1;
        count[ s[0] ]++;
        
        while(j != n-1)
        {
            if(count[s[j+1]] == 0)
            {
                count[s[j+1]]++;
                j++, ans = max(ans, j-i+1);
            }
            
            else if(count[s[j+1]] == 1)
            {
                count[s[i]]--;
                i++;
            }
        }
        
        return ans;
    }
};