class Solution {
public:
    int findPeakElement(vector<int>& a)
    {
        int n = a.size();        
                
        int low = 0, high = n-1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if((mid==0||a[mid]>a[mid-1]) && (mid==n-1||a[mid]>a[mid+1]))
                return mid;
            
            else if(a[mid+1] > a[mid])
                low = mid+1;
            else 
                high = mid-1;
        }
        
        return 0;
    }
};