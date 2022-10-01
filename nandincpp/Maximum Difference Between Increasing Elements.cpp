class Solution {
public:
    int maximumDifference(vector<int>& a) 
    {
        int min_so_far = a[0];
        int n = a.size(), ans = -1;;
        
        for(int i=1;i<n;i++)
        {
            if(a[i] > min_so_far)
                ans = max(ans, a[i]-min_so_far);
            
            min_so_far = min(min_so_far, a[i]);
        }
        
        return ans;
    }
};