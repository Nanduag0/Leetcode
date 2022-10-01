class Solution {
    public List<Integer> maxScoreIndices(int[] a) 
    {
        int rights = 0, lefts = 0;
        int maxi = 0, n = a.length;
        List<Integer> res = new ArrayList<>();
        
        for(int i : a)
            rights += i;
        
        for(int i=0;i<=n;i++)
        {
            if(lefts+rights > maxi)
            {
                maxi = lefts+rights;
                res.clear();
                res.add(i);
            }
            
            else if(lefts+rights == maxi)
                res.add(i);
            
            if(i != n)
            {
                if(a[i] == 0)
                    lefts++;
                if(a[i] == 1)
                    rights--;
            }
        }
        
        return res;
    }
}