class Solution {
public:
    int kthFactor(int n, int k)
    {
        bool flag = 1;
        int i = 1;
        int cnt = 0;
        
        while(cnt < k)
        {
            if(n%i == 0)
                cnt++;
            
            if(i > n)
            {
                flag = 0;
                break;
            }
            i++;
        }
        
        if(!flag)
            return -1;
        return i-1;
    }
};



