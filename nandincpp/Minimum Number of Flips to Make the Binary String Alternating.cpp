class Solution {
public:
    int minFlips(string s) 
    {
        int N = s.size();
        s = s+s;
        string match1 = "", match2 = "";
        
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(i%2 == 0)
            {
                match1 += "0";
                match2 += "1";
            }
            else
            {
                match1 += "1";
                match2 += "0";
            }
        }
        
        int ans = INT_MAX;
        int l = 0, r = 0;
        int diff1 = 0, diff2 = 0;
        
        while(r < n)
        {
            if(s[r] != match1[r])
                diff1++;
            if(s[r] != match2[r])
                diff2++;
            
            if(r-l+1 > N)
            {
                diff1 -= (match1[l]!=s[l])?1:0;
                diff2 -= (match2[l]!=s[l])?1:0;
                l++;
            }
            
            if(r-l+1 == N)
                ans = min({ans, diff1, diff2});
                        
            r++;
        }
        
        return ans;
    }
};