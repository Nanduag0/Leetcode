class Solution {
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        int len = 1, start = 0;
        
        if(n == 1)
            return s;
        
        for(int i=1;i<n;i++)
        {
            //even part
            int high = i, low = i-1;
            
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1 > len)
                {
                    len = high-low+1;
                    start = low;
                }
                low--, high++;
            }
            
            //odd part
             high = i+1, low = i-1;
            
            while(low>=0 && high<n && s[low]==s[high])
            {
                if(high-low+1 > len)
                {
                    len = high-low+1;
                    start = low;
                }
                low--, high++;
            }
        }
        
        string ans = "";
        for(int i=start;i<start+len;i++)
            ans += s[i];
        
        return ans;//to_string(start);
    }
};