class Solution {
    bool fun(int n, int power)
    {
        if(n == 0)
            return 1;
        if(power > n)
            return 0;
        
        return fun(n, power*3)||fun(n-power, power*3);
    }
    
public:
    bool checkPowersOfThree(int n)
    {
        return fun(n, 1);
    }
};