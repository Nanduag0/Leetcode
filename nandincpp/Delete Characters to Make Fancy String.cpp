class Solution {
public:
    string makeFancyString(string s)
    {
        string ans = "";
        int n = s.size();
        
        for(int i=0;i<n;)
        {
            if(s[i] != s[i+1])
                ans += s[i], i++;
            
            else
            {
                int j = i+2;
                while(j<n && s[j]==s[i])
                    j++;
                
                ans += s[i];
                ans += s[i+1];
                i = j;
            }
        }
        
        return ans;
    }
};