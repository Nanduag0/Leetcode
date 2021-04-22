class Solution {
public:
    double myPow(double x, long n) {
        if(n == 0)
            return 1;
        if(n < 0)
            return 1 / myPow(x, -n);
        
        double result = 1;
        while(n) {
            if(n & 1)
                result *= x;
            x *= x;
            n >>= 1;
        }
        return result;
    }
};