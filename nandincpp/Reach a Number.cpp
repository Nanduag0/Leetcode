class Solution {
public:
    int reachNumber(int target) 
    {
        int i = 0;
        int step = 1;
        target = abs(target);
        
        while(i < target)
        {
            i += (step++);
        }
        
        while((i-target) & 1)
        {
            i += step++;
        }
     
        return --step;
    }
};