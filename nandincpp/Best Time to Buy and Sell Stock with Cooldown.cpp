class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        vector<int> buy(n+1), sell(n+1);
        
        buy[1] = -prices[0];
        for(int i=2;i<=n;i++)
        {
            int price = prices[i-1];
            
            buy[i] = max(buy[i-1], sell[i-2]-price);
            sell[i] = max(sell[i-1], buy[i-1]+price);
        }
        
        return sell[n];
    }
};