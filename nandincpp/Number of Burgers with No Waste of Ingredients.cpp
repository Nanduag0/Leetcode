class Solution {
public:
    vector<int> numOfBurgers(int t, int c)
    {
        if(t%2 != 0)
            return {};
        
    
        int j = (t - 2*c)/2;
        int s = (4*c - t)/2;
        
        if(j<0 || s<0)
            return {};
        
        return  {j ,s};
    }
};