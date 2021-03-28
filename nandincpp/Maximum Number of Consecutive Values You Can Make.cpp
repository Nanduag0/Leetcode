class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins)
    {
        int ans = 1;
        sort(coins.begin(), coins.end());
        
        for(int i=0;i<coins.size();i++)
        {
            if(ans >= coins[i])
                ans += coins[i];
        }
        
        return ans;
    }
};