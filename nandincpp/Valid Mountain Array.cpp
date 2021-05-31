class Solution {
    int sgn(int x)
    {
        if(x > 0)
            return 1;
        else if(x < 0)
            return -1;
        
        return 0;
    }
public:
    bool validMountainArray(vector<int>& a)
    {
        int n = a.size(), cnt = 0;
        
        if(n < 3)
            return 0;
        
        if(a[1]-a[0] < 0)
            return 0;
        
        for(int i=1;i<n-1;i++)
        {
            if(sgn(a[i]-a[i-1])==0 || sgn(a[i+1]-a[i])==0)
                return 0;
            
            if(sgn(a[i]-a[i-1]) != sgn(a[i+1]-a[i]))
                cnt++;
        }
        
        if(cnt != 1)
            return 0;
        return 1;
    }
};