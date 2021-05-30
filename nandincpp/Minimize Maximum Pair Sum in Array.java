class Solution {
    public int minPairSum(int[] a)
    {
        int n = a.length;
        Arrays.sort(a);
        
        int i = 0, j = n-1;
        n = n/2;
        
        int ans = -1;
        while(i < n)
        {
            ans = Math.max(ans, a[i]+a[j]);
            i++;
            j--;
        }
        
        return ans;
    }
}