class Solution {
public:
    int maxProfit(vector<int>& a, int fee)
    {
        int buy = -a[0];
        int sell = 0;
        
        for(int i=1;i<a.size();i++)
        {
            sell = max(sell, buy+a[i]-fee);
            buy = max(buy, sell-a[i]);
        }
        
        return sell;
    }
};