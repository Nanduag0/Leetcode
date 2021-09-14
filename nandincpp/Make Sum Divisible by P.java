class Solution {
    public int minSubarray(int[] a, int p)
    {
        int need = 0;
        int n = a.length;
        
        for(var i : a)
            need = (need+i) % p;
        
        if(need == 0)
            return 0;
        
        Map<Integer, Integer> m = new HashMap<>();
        m.put(0, -1);
        
        int prefix = 0, ans = n;
        for(int i=0;i<n;i++)
        {
            prefix = (prefix + a[i])%p;
            
            int search = (prefix - need)%p;
            if(search < 0)
                search += p;
            
            if(m.containsKey(search))
            {
                ans = Math.min(ans, i-m.get(search));
            }
            
            m.put(prefix, i);
        }
        
        return ans==n ? -1 : ans;
    }
}