class Solution {
public:
    bool isHappy(int n)
    {
        for(int i=0;i<100000;i++)
        {
            if(n == 1)
                return 1;
            
            int m = n, sum = 0;
            while(m)
            {
                sum += (m%10)*(m%10);
                m /= 10;
            }
            n = sum;
        }
        return 0;
    }
};