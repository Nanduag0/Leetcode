class Solution {
    public int minSwaps(int[] a)
    {
        int one = 0, n = a.length;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 1)
                one++;
        }
        
        int i, winsiz = one;
        one = 0;
        
        for(i=0;i<winsiz;i++)
        {
            if(a[i] == 1)
                one++;
        }
        
        int maxone = one;
        for(;i<n+winsiz;i++)
        {
            one -= a[(i-winsiz)%n];
            one += a[i%n];
            
            maxone = Math.max(maxone, one);
        }
        
        return winsiz-maxone;
    }
}