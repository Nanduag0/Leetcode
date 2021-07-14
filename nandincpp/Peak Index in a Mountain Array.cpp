class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a)
    {
        int n = a.size();
        if(n < 3)
            return 0;
        
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
                return i;
        }
        
        return -1;
    }
};