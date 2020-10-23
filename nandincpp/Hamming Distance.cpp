class Solution {
public:
    int hammingDistance(int x, int y)
    {
        int z = x^y;
        
        return __builtin_popcount(z);
    }
};