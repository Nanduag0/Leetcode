class Solution { 
    
    int fun(int start, int end, string s, int k)
    {
        if(s.length()==0 || k>s.length())
            return 0;
        
        if(k <= 1)
            return (s.length());
        
        int aage, piche;
        int freq[26] = {};
        
        for(int i=start;i<end;i++)
        {
            freq[s[i]-'a']++;
        }    
               
        for(int i=start;i<end;i++)
        {
            if(freq[s[i]-'a'] < k)
            {
                aage = fun(start, i, s, k);
                piche = fun(i+1, end, s, k);
                
                return max(aage, piche);
            }
        }
        
        return (end - start);
    }
    
    public:
    
    int longestSubstring(string s, int k) 
    {
                
        return fun(0, s.length(), s, k);
    }
        
    
};