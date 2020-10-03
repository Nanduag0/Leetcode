class Solution {
public:
    int maxProduct(vector<int>& a)
    {
        int n = a.size();
        int mini=a[0],maxi = a[0],ans = a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i] < 0)
                swap(mini, maxi);
            
            mini = min(a[i], mini*a[i]);
            maxi = max(a[i], maxi*a[i]);
            
            ans = max(ans, maxi);
        }
        
        return ans;
    }
};