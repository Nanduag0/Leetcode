class Solution {
public:
    int numberOfSteps (int n)
    {
        int ans = 0;
        
        while(n)
        {
            if(n&1)
                n--;
            else
                n /= 2;
            
            ans++;
        }
        
        return ans;
    }
};