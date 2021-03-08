class Solution {
public:
    int beautySum(string s)
    {
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
        {
            vector<int> freq(26, 0);
            for(int j=i;j<s.size();j++)
            {
                freq[s[j] - 'a']++;
                long long maxi = INT_MIN, mini = INT_MAX;
                
                for(int k=0;k<26;k++)
                {
                    if(freq[k]!=0 && freq[k]>maxi)
                        maxi = freq[k];
                    
                    if(freq[k]!=0 && freq[k]<mini)
                        mini = freq[k];
                }
                
                ans += maxi-mini;
            }
        }
        return ans;
    }
};