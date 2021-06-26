class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n == 0)
            return 0;
        if( ceil(log(n) / log(4)) == floor(log(n) / log(4)))
            return 1;
        return 0;
    }
};