class Solution {
public:
    int hIndex(vector<int>& a) 
    {
        int ans = 0;
        int n = a.size();
        int low = 0, high = n-1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(a[mid] >= n-mid)
            {
                ans = max(ans, n-mid);
                high = mid-1;
            }
            
            else
                low = mid + 1;
        }
        
        return ans;
    }
};