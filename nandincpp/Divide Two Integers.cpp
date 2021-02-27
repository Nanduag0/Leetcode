class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if(dividend==-2147483648 && divisor==-1)
            return  2147483647;
        int res = 0;
        res = abs(dividend)/abs(divisor);
        
        if(divisor<0 && dividend<0)
            return res;
        if(divisor>0 && dividend>0)
            return res;
        else
            return -res;
    }
};