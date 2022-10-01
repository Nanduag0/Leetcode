class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int step = 0, pref = 0;
        
        for(int i=0;i<plants.size();)
        {
            int next = plants[i] + pref;
            
            if(next <= capacity)
            {
                step++;
                pref += plants[i];
                i++;
            }
            
            else
            {
                step += (i+i);
                pref = 0;
            }
        }
        
        return step;
    }
};