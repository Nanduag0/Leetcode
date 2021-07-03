class Solution {
    public int minOperationsMaxProfit(int[] customers, int boardingCost, int runningCost) 
    {
        int wait = 0, profit = 0, max_prof = 0;
        int rotation = -1, i = 0;
        
        while(i<customers.length || wait>0)
        {
            if(i < customers.length)
                wait += customers[i];
            
            profit += Math.min(4, wait)*boardingCost - runningCost;
            wait -= Math.min(4, wait);
            
            if(profit > max_prof)
            {
                max_prof = profit;
                rotation = i+1;
            }
            
            i++;
        }
        
        return rotation;
    }
}