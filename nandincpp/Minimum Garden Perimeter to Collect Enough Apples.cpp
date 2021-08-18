class Solution {
public:
    long long minimumPerimeter(long long need) 
    {
        long long ans = 0;
        long long i = 0;
        
        while(ans < need)
        {
            ans += pow(i, 2)*12;
            i++;
        }
        
        return (i-1)*8;
    }
};