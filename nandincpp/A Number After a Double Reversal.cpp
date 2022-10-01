class Solution {
public:
    bool isSameAfterReversals(int num)
    {
        if(num == 0)
            return 1;
        
        if(num%10 == 0)
            return 0;
        return 1;
    }
};