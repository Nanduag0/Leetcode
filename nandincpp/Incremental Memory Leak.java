class Solution {
    public int[] memLeak(int memory1, int memory2) 
    {
        int i = 1;
        while(true)
        {
            if(i<=memory1 || i<=memory2)
            {
                if(memory2 > memory1)
                    memory2 -= i;
                else
                    memory1 -= i;
            }
            
            else
                break;
            i++;
        }
        
        int ans[] = {i, memory1, memory2};
        return ans;
    }
}