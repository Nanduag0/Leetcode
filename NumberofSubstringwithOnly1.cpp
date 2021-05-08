class Solution {
public:
    int numSub(string s)
    {
          if(s=="")
            return 0;
        int mod=1000000007;
        int currcount=0;
        long ans=0;
        long t=0 ;
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='1')
            {
                currcount++;
            }
            else
            {
                t = (long) currcount*(currcount+1)/2;
                ans+=(t%mod);
                ans=ans%mod;
                currcount=0;  
            }
            i++;
        }
        
        t = (long) currcount*(currcount+1)/2;
        ans+=(t%mod);
        return (int) ans%mod;
        
    }
};