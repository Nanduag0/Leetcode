class Solution {
    public boolean asteroidsDestroyed(int mass, int[] a) 
    {
        Arrays.sort(a);
        long m = mass;
        boolean flag = true;
        
        for(int i=0;i<a.length;i++)
        {
            if(m >= a[i])
                m += a[i];
            else
            {
                flag = false;
                break;
            }
        }
        
        return flag;
    }
}