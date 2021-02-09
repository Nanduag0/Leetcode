class Solution {
public:
    int trailingZeroes(int n)
    {
        int five = 5;
        int ans = 0;
        while((n/five) > 0)
        {
            ans += (n/five);
            five *= 5;
        }
        
        return ans;
    }
};