class Solution {
    bool check(int n)
    {
        if( ceil((double)sqrt(n)) == floor((double)sqrt(n)) )
            return 1;
        return 0;
    }
    
public:
    int countTriples(int n) 
    {
        int cnt = 0;
        for(int i=1;i<=n-1;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int x = i*i + j*j;
                
                if(check(x) && sqrt(x)<=n)
                    cnt++;
            }
        }
        
        return cnt*2;
    }
};