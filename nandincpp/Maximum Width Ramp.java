class Solution {
    public int maxWidthRamp(int[] a) 
    {
        Stack<Integer> s = new Stack<>();
        int n = a.length;
        
        for(int i=0;i<n;i++)
        {
            if(s.empty() || a[i]<a[s.peek()])
                s.push(i);
        }
        
        int ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && a[s.peek()]<=a[i])
            {
                ans = Math.max(ans, i-s.peek());
                s.pop();
            }
        }
        
        return ans;
    }
}