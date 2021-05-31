class Solution {
    public boolean validMountainArray(int[] a) 
    {
        int n = a.length, cnt = 0;
        
        if(n < 3)
            return false;
        
        if(a[1]-a[0] < 0)
            return false;
        
        for(int i=1;i<n-1;i++)
        {
            if(sgn(a[i]-a[i-1])==0 || sgn(a[i+1]-a[i])==0)
                return false;
            
            if(sgn(a[i]-a[i-1]) != sgn(a[i+1]-a[i]))
                cnt++;
        }
        
        if(cnt != 1)
            return false;
        return true;   
    }
    
     private int sgn(int x)
    {
        if(x > 0)
            return 1;
        else if(x < 0)
            return -1;
        
        return 0;
    }
}