class Solution {
public:
    int bitwiseComplement(int n)
    {
        if(n == 0)
            return 1;
        
        int copy = n;
        int i = 0;
        
        while(copy != 0)
        {
            n = n^ (1<<i);
            i++;
            copy = copy>>1;
        }
        
        return n;
    }
};