#define ll long long
class Solution {
public:
    int arrangeCoins(int n)
    {
       // long long temp = sqrt(2*n + 0.25);
        return (int)(sqrt(2*(ll)n + 0.25)-0.5);
    }
};