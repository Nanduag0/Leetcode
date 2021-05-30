class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity)
    {
        vector<int> stops(1001, 0);
        for(int i=0;i<trips.size();i++)
        {
            stops[trips[i][1]] += trips[i][0];
            stops[trips[i][2]] -= trips[i][0];
        }
        
        int sum = 0;
        for(int i=0;i<1001;i++)
        {
            sum += stops[i];
            
            if(sum > capacity)
                return 0;
        }
        
        return 1;
    }
};