class Solution {
public:
    int longestSubarray(vector<int>& a) 
    {
        int zero = 0;
        int i = 0, j = 0, ans = 0;
        
        while(j < a.size())
        {
            if(a[j] == 0)
                zero++;
            
            if(zero > 1)
            {
                while(a[i] != 0)
                    i++;
                i++;
                zero--;
            }
            
            ans=max(ans,j-i);                 
            
            j++;
        }
        return ans;
    }
};