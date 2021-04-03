class Solution {
public:
    bool squareIsWhite(string coordinates)
    {
        if((coordinates[0]-'a')%2 == 0)
        {
            if(coordinates[1]&1)
                return 0;
            return 1;
        }
        
        else
        {
            if(coordinates[1]&1)
                return 1;
            return 0;
        }
        
        return 0;
    }
};