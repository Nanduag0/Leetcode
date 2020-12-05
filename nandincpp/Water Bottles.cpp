class Solution {
public:
    int numWaterBottles(int bhorti, int exch)
    {
        int empty = bhorti;
        int sum = bhorti;
        
        while(empty >= exch)
        {
            sum += (empty/exch);
            empty = (empty/exch) + (empty%exch);
        }
        
        return sum;
    }
};