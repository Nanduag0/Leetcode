class Solution {
public:
    int minFlipsMonoIncr(string s)
    {
        int one = 0, zero = 0;
        
        for(auto i : s)
        {
            if(i == '1')
                one++;
            else
                zero++;
            
            zero = min(zero, one);
        }
        return zero;
    }
};