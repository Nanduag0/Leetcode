class Solution {
public:
    int minOperations(vector<int>& a)
    {
        int ans = 0, n = a.size();
        if(n <= 1)
            return 0;
        
        int prev = a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i] > prev)
            {
                prev = a[i];
                continue;
            }
            
            else
            {
                ans += (prev - a[i] + 1);
                prev++;
            }
        }
        return ans;
    }
};