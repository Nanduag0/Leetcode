class Solution {
    public int minSwaps(String s) 
    {
        int n = s.length();
        int zero_lage = 0, one_lage = 0;   
        
        int zero = 0, one = 0;
        for(char i : s.toCharArray())
        {
            if(i == '0')
                zero++;
            else
                one++;
        }
        
        if(Math.abs(one - zero) > 1)
            return -1;
        
        for(int i=0;i<n;i+=2)
        {
            if(s.charAt(i) != '0')
                zero_lage++;
            if(s.charAt(i)!='1')
                one_lage++;
        }
        
        if(zero == one)
            return Math.min(one_lage, zero_lage);
        
        return (zero>one) ? zero_lage : one_lage;
    }
}