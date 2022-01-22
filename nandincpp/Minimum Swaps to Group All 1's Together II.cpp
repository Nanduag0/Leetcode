class Solution {
public:
    int minSwaps(vector<int>& a) 
    {
        int one = 0;
        for(auto i : a)
            if(i == 1)
                one++;
        
        int i, winsiz = one;
        one = 0;
        
        for(i=0;i<winsiz;i++)
        {
            if(a[i] == 1)
                one++;
        }
        
        int maxone = one;
       // one = 0;
        
        int n = a.size();
        for(;i<n+winsiz;i++)
        {
           one -= a[(i-winsiz)%n];
           one += a[i%n];
            
           maxone = max(maxone, one);
        }
        
        return winsiz-maxone;
        
    }
};