class Solution {
    bool check(bitset<26>& x, bitset<26>& y)
    {
        for(int i=0;i<26;i++)
        {
            if(x[i] & y[i])
                return 1;
        }
        
        return 0;
    }
    
public:
    int maxProduct(vector<string>& words)
    {
        int ans = 0;
        vector<bitset<26>> freq(words.size());
        
        for(int i=0;i<words.size();i++)
        {
            for(auto c : words[i])
            {
                freq[i][c-'a'] = 1;
            }
            
            for(int j=0;j<i;j++)
            {
                if(!check(freq[i], freq[j]))
                {
                    ans = max(ans, (int)(words[i].size()*words[j].size()));
                }
            }
        }
        
        return ans;
    }
};