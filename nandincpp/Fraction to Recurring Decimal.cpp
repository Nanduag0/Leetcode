class Solution {
    unordered_map<int, int> m;
public:
    string fractionToDecimal(int numerator, int denominator) 
    {
        if(numerator == 0)
            return "0";
        
        string ans = (numerator>0 ^ denominator>0) ? "-" : "";
        
        long n = labs(numerator);
        long d = labs(denominator);
        
        ans += to_string(n / d);
        long rem = n%d;
        
        if(!rem)
        {
            return ans;
        }
        
        ans += ".";
        
        while(rem)
        {
            if(m.count(rem))
            {
                ans.insert(m[rem], "(");
                ans += ")";
                break;
            }
            
            m[rem] = ans.size();
            rem *= 10;
            ans += to_string(rem / d);
            
            rem %= d;
        }
        
        return ans;
    }
};