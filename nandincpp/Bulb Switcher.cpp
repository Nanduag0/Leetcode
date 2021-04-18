class Solution {
public:
    int bulbSwitch(int n) 
    {
        if(n==0 || n==1)
            return n;
        
        return sqrt(n);
    }
};