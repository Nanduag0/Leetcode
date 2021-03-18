class Solution {
public:
    int largestPerimeter(vector<int>& a)
    {
        sort(a.begin(), a.end());
        
        
        
        for(int i=a.size()-3;i>=0;i--)
        {
            if(a[i+2] < a[i+1]+a[i])
                return (a[i]+a[i+1]+a[i+2]);
        }
        
        return 0;
    }
};