class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int boardingCost, int runningCost)
    {
        int wait = 0, profit = 0, max_prof = 0;
        int rotation = -1, i = 0;
        
        while(i<customers.size() || wait>0)
        {
            if(i < customers.size())
                wait += customers[i];
            
            profit += min(4, wait)*boardingCost - runningCost;
            wait -= min(4, wait);
            
            if(profit > max_prof)
            {
                max_prof = profit;
                rotation = i+1;
            }
            
            i++;
        }
        
        return rotation;
    }
};