class Solution {
    bool isvowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            return 1;
        
        return 0;
    }
    
public:
    int maxVowels(string s, int k)
    {
        int i = 0, j = 0, cnt = 0;
        while(j < i+k)
        {
            if(isvowel(s[j]))
                cnt++;
            
            j++;
        }
        
        if(cnt == k)
            return cnt;
        
        int ans = cnt, n = s.size();
        j = i+k-1;
        
        while(i<n && j<n)
        {
            if(isvowel(s[j+1]))
                cnt++;
            if(isvowel(s[i]))
                cnt--;
            
            i++, j++;
            
            ans = max(ans, cnt);
            
            if(ans == k)
                return k;
        }
        
        return ans;
    }
};