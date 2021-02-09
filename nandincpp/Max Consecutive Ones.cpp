class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a)
    {
        int n = a.size(), i, count, prev = 0;
        int ans = 0;
        
        for(i=0;i<n;i++)
        {
            if(a[i] == 1)
                break;
        }
        
        for(int j=i;j<n;j++)
        {
            if(a[j] == 1)
            {
                if(prev == 0)
                    count = j;
            }
            
            else if(a[j] == 0)
            {
                if(prev == 1)
                    ans = max(ans, j-count);
            }
            
            prev = a[j];
        }
        
        if(a[n-1] == 1)
            ans = max(ans, n-count);
        
        return ans;
    }
};