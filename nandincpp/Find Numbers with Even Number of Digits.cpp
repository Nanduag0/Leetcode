class Solution {
    int fun(int n)
    {
        int cnt = 0;
        
        while(n > 0)
        {
            cnt++;
            n /= 10;
        }
        return cnt;
    }
    
public:
    int res = 0;
    int findNumbers(vector<int>& a) 
    {
        for(int i=0;i<a.size();i++)
        {
            
            if(fun(a[i])%2 == 0)
                res++;
            
        }
        return res;
    }
};