class Solution {
    public int countKDifference(int[] a, int k) 
    {
        HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();
        int ans = 0;
        
        for(int i=0;i<a.length;i++)
        {
            if(m.containsKey(a[i]+k))
                ans += m.get(a[i]+k);
            if(m.containsKey(a[i]-k))
                ans += m.get(a[i]-k);
            
            m.put(a[i], m.getOrDefault(a[i], 0) + 1);
        }
        
        return ans;
    }
}