class Solution {
public:
    int integerReplacement(int n) 
    {
        if(n == 2147483647)
            return 32;
        
        if(n == 1)
            return 0;
        else if(n%2 == 0)
            return 1+integerReplacement(n/2);
        else
            return 1+min(integerReplacement(n-1), integerReplacement(n+1));
    }
};