class Solution {
    int bit(int n)
    {
        int c = 0;
        while(n)
        {
            c++;
            n = n&(n-1);
        }
        
        return c;
    }
    
public:
    vector<int> sortByBits(vector<int>& a) 
    {
        sort(a.begin(), a.end(), [&](int x, int y)
             {
                 int aa = bit(x), bb = bit(y);
                 
                 if(aa < bb)
                     return 1;
                 if(aa==bb && x<y)
                     return 1;
                 return 0;
             });
        
        return  a;
    }
};