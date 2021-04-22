class Solution {
    string ans = "";
public:
    string strWithout3a3b(int a, int b, char aa='a', char bb='b')
    {
        if(b > a)
            return strWithout3a3b(b, a, bb, aa);
        
        while(a--)
        {
            ans += aa;
            if(a > b)
                ans += aa, a--;
            
            if(b > 0)
            {
                b--;
                ans += bb;
            }
        }
        
        return ans;
    }
};