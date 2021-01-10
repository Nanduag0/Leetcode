class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        float slope;
        if(coordinates[1][0] - coordinates[0][0] == 0)
        {
            slope = INT_MAX;
        }
        else
        {
            slope = float(coordinates[1][1] - coordinates[0][1])/(coordinates[1][0] - coordinates[0][0]);
        }
        int temp;
        for(int i = 2; i < coordinates.size(); i++)
        {
            if(coordinates[i][0] - coordinates[i - 1][0] == 0)
            {
                if(slope != INT_MAX)
                    return false;
            }
            else if(float(coordinates[i][1] - coordinates[i - 1][1])/(coordinates[i][0] - coordinates[i - 1][0])!= slope)
                    return false;
        }
        return true;
    }
};