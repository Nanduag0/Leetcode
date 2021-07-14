class Solution {
public:
    int totalHammingDistance(vector<int>& a)
    {
        int ans = 0, n = a.size();
        
        for(int i=31;i>=0;i--)
        {
            int set_bit = 0;
            
            for(int j=0;j<n;j++)
            {
                if(a[j] & (1<<i))
                    set_bit++;
            }
            
            ans += set_bit*(n-set_bit);
        }
        
        return ans;
    }
};