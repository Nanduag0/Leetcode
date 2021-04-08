class Solution {
public:
    int reinitializePermutation(int n) 
    {
        if(n == 2)
            return 1;
        
        int now = 2;
        int cnt = 1;
        
        while(now != 1)
        {
            cnt++;
            now = (now*2)%(n-1);
        }
        return cnt;
    }
};