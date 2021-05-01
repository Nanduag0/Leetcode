class Solution {
public:
    string sortString(string s) 
    {
        vector<int> freq(26, 0);
        for(auto i : s)
            freq[i - 'a']++;
        
        string ans = "";
        
        while(ans.size() < s.size())
        {
            for(int i=0;i<26;i++)
            {
                if(freq[i])
                {
                    freq[i]--;
                    ans += i+'a';
                }
            }
            
            for(int j=25;j>=0;j--)
            {
                if(freq[j])
                {
                    freq[j]--;
                    ans += j+'a';
                }
            }
        }
        
        return ans;
    }
};