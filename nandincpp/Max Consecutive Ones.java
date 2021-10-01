class Solution {
    public int findMaxConsecutiveOnes(int[] a) 
    {
        int res = 0;
        int cnt = 0;
        
        for (int i = 0; i < a.length; i++) 
        {
            if (a[i] == 1) 
            {
        	cnt++;
                
        	res = Math.max(cnt, res);
            }
            else 
                cnt = 0;
        }
        
        return res;
    }
}