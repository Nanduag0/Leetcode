class Solution {
public:
    int numberOfMatches(int n) 
    {
        if(n==0 || n==1)
            return 0;
        
        int rest=0;
        int tot=0;
        backtrack(n,tot);
        return tot;
    }
    void  backtrack(int n,int &tot)
    {
        if(n==1)
        {
            return ;
        }
        if(!(n&1))
        {
            tot+=n/2;
            backtrack(n/2,tot);
        }
        if(n&1)
        {
            tot+=(n-1)/2;
            backtrack(1+(n-1)/2,tot);
            
        }
    }
};