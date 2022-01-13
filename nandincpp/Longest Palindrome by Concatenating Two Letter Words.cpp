class Solution {
public:
    int longestPalindrome(vector<string>& words)
    {
        int freq[26][26] = {};
        int ans = 0;
        
        for(auto i : words)
        {
            int x = i[0]-'a', y = i[1]-'a';
            
            if(freq[y][x] > 0)
            {
                ans += 4;
                freq[y][x]--;
            }
            
            else
            {
                freq[x][y]++;
            }
        }
        
        for(int i=0;i<26;i++)
        {
            if(freq[i][i] > 0)
            {
                ans += 2;
                break;
            }
        }
        
        return ans;
    }
};