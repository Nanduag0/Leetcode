class Solution {
public:
    bool lemonadeChange(vector<int>& s)
    {
        int five, ten;
        five = ten = 0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 5)
                five++;
            
            else if(s[i] == 10)
            {
                five--, ten++;
                
                if(five < 0)
                    return 0;
            }
            
            else if(s[i] == 20)
            {
                if(ten!=0 && five!=0)
                    ten--, five--;
                
                else if(five >= 3)
                    five -= 3;
                
                else
                    return 0;
            }
        }
        return 1;
    }
};