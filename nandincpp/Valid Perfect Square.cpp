class Solution {
public:
    bool isPerfectSquare(int n)
    {
        int low = 1, high = n;
        if(n == 1)
            return 1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(n%mid==0 && n/mid==mid)
                return 1;
            
            else if(mid > n/mid)
                high = mid-1;
            else
                low = mid+1;
        }
        
        return 0;
    }
};