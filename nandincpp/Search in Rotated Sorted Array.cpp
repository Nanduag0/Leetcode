class Solution {
    int bs(vector<int> &a, int low, int high, int target)
    {
        if(low > high)
            return -1;
        
        int mid = low + (high-low)/2;
        
        if(a[mid] == target)
            return mid;
        
        if(a[mid] >= a[low])
        {
            if(target>=a[low] && target<=a[mid])
                return bs(a, low, mid-1, target);
            
            return bs(a, mid+1, high, target);
        }
        
        if(a[mid]<=target && target<=a[high])
            return bs(a, mid+1, high, target);
        
        return bs(a, low, mid-1, target);
    }
public:
    int search(vector<int>& a, int target)
    {
        int n = a.size();
        
        return bs(a, 0, n-1, target);
    }
};