class Solution {
public:
    int countHomogenous(string s)
    {
        if(s=="")
            return 0;
        int mod=1000000007;
        int currcount=1;
        long ans=0;
        long t=0 ;
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]==s[i])
            {
                currcount++;
            }
            else
            {
                t = currcount*(currcount+1)/2;
                ans+=(t%mod);
                ans=ans%mod;
                currcount=1;
            }
        }
        t = (long) currcount*(currcount+1)/2;
        ans+=(t%mod);
        return (int) ans%mod;
        
    }
};