class Solution {
public:
    int maxPower(string s) 
    {
        int maxi = 1, prev = 1;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i] == s[i-1])
            {
                prev++;
                maxi = max(maxi, prev);
            }
            
            else
            {
                //maxi = max(maxi, prev);
                prev = 1; 
            }
        }
        
        return maxi;
    }
};