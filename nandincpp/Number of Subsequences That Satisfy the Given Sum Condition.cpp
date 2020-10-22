class Solution {
    const int mod = 1e9+7;
    
  
public:

    int numSubseq(vector<int>& a, int target) 
    {
        vector<int> dp(a.size());
    dp[0] = 1;
    
    for(int i=1;i<a.size();i++)
    {
        dp[i] = (dp[i-1]*2)%mod;
    }
        
        
        
        int i=0, j=a.size()-1;
        int count = 0;
        sort(a.begin(), a.end());
        
        while(i <= j)
        {
            if(a[i]+a[j] <= target)
            {
                count = (count + (dp[j-i]))%mod;
                i++;
            }
            
            else
                j--;
        }
        
        return count;
    }
        
    
};