class Solution {
    int helper(vector<int>& a, int k) 
    {
        int start = 0;
        int cnt, ans;
        cnt = ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] & 1)
                cnt++;
            
            while(cnt > k)
            {
                if(a[start] & 1)
                    cnt--;
                
                start++;
            }
            
            ans += (i-start)+1;
        }
        
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& a, int k) 
    {
        return helper(a,k)-helper(a,k-1);
    }
};