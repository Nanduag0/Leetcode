class Solution {
public:
    bool isPalindrome(int n)
    {
        if(n < 0)
            return 0;
        
        long long reversedNumber = 0;
        int remainder, x = n;
        
        while(n != 0)
        {
            remainder = n%10;
            reversedNumber = reversedNumber*10 + remainder;
            n /= 10;
        }
        //cout<< n;
        
        if(x == reversedNumber)
            return 1;
        
        return 0;
    }
};