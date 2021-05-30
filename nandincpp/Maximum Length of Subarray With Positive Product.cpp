class Solution {
public:
    int getMaxLen(vector<int>& a)
    {
        int zero_index = -1, first_nega = -1;
        int koto = 0;
        int ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] < 0)
            {
                koto++;
                
                if(first_nega == -1)
                    first_nega = i;
            }
            
            if(a[i] == 0)
            {
                zero_index = i;
                koto = 0;
                first_nega = -1;
            }
            
            else
            {
                if(koto&1)
                {
                    ans = max(ans, i-first_nega);
                }
                
                else
                {
                    ans = max(ans, i-zero_index);
                }
            }
        }
        
        return ans;
    }
};