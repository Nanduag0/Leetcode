class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) 
    {
        int high = a.size() - 1;
        int low = 0;
        
        int index = -1;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            
            if(a[mid] == target)
            {
                index = mid;
                break;
            }
            
            else if(a[mid] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        
        if(index == -1)
            return {-1, -1};
        
        int start, end;
        start = end = index;
        while(start>0 && a[start-1]==target)
            start--;
        while(end<a.size()-1 && a[end+1]==target)
            end++;
        
        return {start, end};
    }
        
    
};