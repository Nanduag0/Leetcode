class Solution {
    public int wateringPlants(int[] plants, int capacity) 
    {
        int pref = 0, step = 0;
        int n = plants.length;
        
        for(int i=0;i<n;)
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
}