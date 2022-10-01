class Solution {
    public int longestSubarray(int[] a) 
    {
        int maxi = 0;
        for(int i : a)
            maxi = Math.max(i, maxi);
        
        int l = 0, ans = 0;
        for(int i : a)
        {
            if(i == maxi)
                l++;
            else
            {
                ans = Math.max(ans, l);
                l = 0;
            }
        }
        
        ans = Math.max(ans, l);
        return ans;
    }
}