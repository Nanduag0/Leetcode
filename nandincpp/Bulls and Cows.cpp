class Solution {
public:
    string getHint(string secret, string guess) 
    {
        int bull, cow;
        bull = cow = 0;
        int n = secret.size();
        
        vector<int> freq_g(10,0), freq_s(10,0);
        
        for(int i=0;i<n;i++)
        {
            if(secret[i] == guess[i])
                bull++;
                
                else
                {
                    freq_g[guess[i]-'0']++;
                    freq_s[secret[i]-'0']++;
                }
        }
        
        for(int i=0;i<10;i++)
        {
            cow += min(freq_g[i], freq_s[i]);
        }
        
        string ans = "";
        ans += to_string(bull);
        ans += 'A';
        ans += to_string(cow);
        ans += 'B';
        
        return ans;
    }
};