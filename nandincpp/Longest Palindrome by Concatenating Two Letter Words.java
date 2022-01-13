class Solution {
    public int longestPalindrome(String[] words) 
    {
        int freq[][] = new int[26][26];
        int ans = 0;
        
        for(String s : words)
        {
            int x = s.charAt(0) - 'a';
            int y = s.charAt(1) - 'a';
            
            if(freq[y][x] > 0)
            {
                ans += 4;
                freq[y][x]--;
            }
            
            else
                freq[x][y]++;
        }
        
        for(int i=0;i<26;i++)
            if(freq[i][i] > 0)
            {
                ans += 2;
                break;
            }
        
        
        return ans;
    }
}