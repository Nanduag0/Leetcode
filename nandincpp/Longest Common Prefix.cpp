class Solution {
public:
    string longestCommonPrefix(vector<string>& s) 
    {
        int n = s.size(), x = INT_MAX;
        
        if(n == 0)
            return "";
        
        string temp = s[0];
        
        for(int i=1;i<n;i++)
        {
            int k = 0, j = 0, ans = 0;
            while(j<temp.size() && k<s[i].size())
            {
                if(temp[j] == s[i][k])
                    ans++;
                
                else
                    break;
                
                j++, k++;
            }
            
            x = min(x, ans);
        }
        return temp.substr(0, x);
    }
};