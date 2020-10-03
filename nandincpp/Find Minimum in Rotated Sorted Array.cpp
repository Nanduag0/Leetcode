class Solution {
public:
    int findMin(vector<int>& a) 
    {
        int l = 0,h = a.size()-1;
        
        if(a[l] <= a[h])
            return a[l];
        
        while(l <= h)
        {
            int mid = (l + h)/2;
            
           /* if(a[mid+1]<a[mid])
                return a[mid+1];*/
            
            if(mid-1>=0 && a[mid-1]>a[mid])
                return a[mid];
            
            if(a[mid] > a[h])
                l = mid+1;
            
           // if(a[mid] < a[l])
            else
                h = mid-1;
            
        }
        return -1;
    }
};