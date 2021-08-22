class Solution {
public:
    int findGCD(vector<int>& a) 
    {
        int x = *max_element(a.begin(), a.end());
        int y = *min_element(a.begin(), a.end());
        
        return gcd(x, y);
    }
};