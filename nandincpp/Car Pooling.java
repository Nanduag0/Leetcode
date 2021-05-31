class Solution {
    public boolean carPooling(int[][] trips, int capacity) 
    {
        int[] stops = new int [1001];
        int n = trips.length;
        
        for(int i=0;i<n;i++)
        {
            stops[trips[i][1]] += trips[i][0];
            stops[trips[i][2]] -= trips[i][0];
        }
        
        int sum = 0;
        for(int i=0;i<1001;i++)
        {
            sum += stops[i];
            
            if(sum > capacity)
                return false;
        }
        
        return true;
    }
}