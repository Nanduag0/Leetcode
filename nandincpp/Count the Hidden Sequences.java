class Solution {
    public int numberOfArrays(int[] d, int lower, int upper) 
    {
        long sum = 0, mini = 0, maxi = 0;
        
        for(int i : d)
        {
            sum += i;
            
            maxi = Math.max(maxi, sum);
            mini = Math.min(mini, sum);
        }
        
        return (int)Math.max(0, (upper-maxi)+(mini-lower)+1);
    }
}