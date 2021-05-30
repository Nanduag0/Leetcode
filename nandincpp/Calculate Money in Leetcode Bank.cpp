
class Solution {
public:
    int totalMoney(int n) 
    {
        int i = 1, day = 1, prev = 1, sum = 0, i_abhi;
        
        for(int day=1;day<=n;day++)
        {
            if((day-1)%7 == 0)
            {
                i = day/7;
                i++;
            }
            
            sum += i;
            i++;
        }
        
        return sum;
    }
};