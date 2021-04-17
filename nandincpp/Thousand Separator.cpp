class Solution {
public:
    string thousandSeparator(int n) 
    {
        string s = to_string(n);
        int SI = s.size();
        
        if(SI <= 3)
            return s;
        string ans = "";
        
        int i = SI-1, cnt = 0;
        
        while(i >= 0)
        {
            if(cnt == 3)
            {
                ans += '.';
                cnt = 0;
            }
                cnt++;
            ans += s[i];
            
            i--;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};