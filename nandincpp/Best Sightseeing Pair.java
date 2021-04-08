class Solution {
//Java code
    public int maxScoreSightseeingPair(int[] a)
    {
        int ans = 0, maxi = a[0];
        
        for(int i=1;i<a.length;i++)
        {
            ans = Math.max(ans, maxi+a[i]-i);
            maxi = Math.max(maxi, a[i]+i);
        }
        
        return ans;
    
    }
}