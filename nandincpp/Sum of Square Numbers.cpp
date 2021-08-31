#define ll long long
class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        if(c == 0)
            return 1;
        
        ll low = 0, high = sqrt(c);
        while(low <= high)
        {
            ll mid = low*low + high*high;
            
            if(mid == c)
                return 1;
            else if(mid > c)
                high--;
            else
                low++;
        }
        
        return 0;
    }
};