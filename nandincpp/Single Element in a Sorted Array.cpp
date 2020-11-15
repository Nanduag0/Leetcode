class Solution {
public:
    int singleNonDuplicate(vector<int>& a)
    {
        int l = 0,r = a.size()-1;
        
        while(l <= r)
        {
            int mid = l + (r-l)/2;
            
            if(l == r)
                return a[mid];
            
            if(mid%2 == 0)
            {
                if(a[mid] == a[mid+1])
                    l = mid+1;
                
                else
                    r = mid;
            }
            
            else 
            {
               if(a[mid] == a[mid-1])
                   l = mid + 1;
                
                else
                    r = mid;                        
            }
        }
        
        return -1;
    }
};