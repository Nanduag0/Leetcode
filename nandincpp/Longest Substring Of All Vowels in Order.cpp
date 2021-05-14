class Solution {
public:
    int longestBeautifulSubstring(string word) 
    {
        int res = 0, ans = 1, cnt = 1;
        int n = word.size();
        
        for(int i=1;i<n;i++)
        {
            if(word[i] == word[i-1])
                ans++;
            else if(word[i-1] < word[i])
            {
                ans++, cnt++;
            }
            
            else
            {
                ans = cnt = 1;
            }
            
            if(cnt == 5)
                res = max(res, ans);
        }
        
        return res;
    }
};