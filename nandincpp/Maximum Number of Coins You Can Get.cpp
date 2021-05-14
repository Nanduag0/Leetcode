class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
      sort(piles.begin(), piles.end());
        
        int ans = 0;
        
        int i=piles.size()-2;
        int j = 0;
        
        while(j < piles.size()/3)
        {
            ans += piles[i];
            i -= 2;
            j++;
        }
        
        return ans;
    }
};