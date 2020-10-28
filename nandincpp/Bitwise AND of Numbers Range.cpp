class Solution {
public:
    int rangeBitwiseAnd(int m, int n) 
    {
        int ans = 0;
        
        for(int i=31;i>=0;i--)
        {
            if( (m & (1<<i) ) != (n & (1<<i) ) )
                break;
            
            else
            ans |= (n & (1<<i));
        }
        
        return ans;
    }
};