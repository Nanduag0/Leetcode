class Solution {
    
        set<int> sset;
public:
    int minDeletions(string s)
    {
        vector<int> freq(26, 0);
        
        for(int i=0;i<s.size();i++)
        {
            freq[s[i] - 'a']++;
        }
        
        int cnt = 0;
        
        for(char c='a';c<='z';c++)
        {
            int koto = freq[c - 'a'];
            
            if(koto>0 && sset.count(koto))
            {
                while(koto>0 && sset.count(koto))
                {
                    cnt++;
                    koto--;
                }
            }   
                sset.insert(koto);
            
        }
        
        return cnt;
    }
};