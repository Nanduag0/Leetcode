class Solution {
    int diff(int value, vector<int>& a, int target)
    {
        int s = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] > value)
                s += value;
            else
                s += a[i];
        }
        
        return abs(target - s);
    }
    
public:
    int findBestValue(vector<int>& a, int target) 
    {
        int low = 0, high = 100005;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(diff(mid, a, target) <= diff(mid+1, a, target))
            {
                high = mid - 1;
            }
            
            else
                low = mid + 1;
        }
        
        return low;
    }
};