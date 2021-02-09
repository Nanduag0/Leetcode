class Solution {
public:
    int longestMountain(vector<int>& a)
    {
        int n = a.size();
        
        vector<int> left(n, 0), right(n, 0);
        
        for(int i=1;i<n;i++)
        {
            if(a[i-1] < a[i])
                left[i] = 1 + left[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            if(a[i] > a[i+1])
                right[i] = 1 + right[i+1];
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(right[i]>0 && left[i]>0)
                ans = max(ans, right[i]+left[i]);
        }
        
        return (ans==0)?0:ans+1;
    }
};