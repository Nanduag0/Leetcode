class Solution {
public:
    int dominantIndex(vector<int>& a)
    {
        int maxi = INT_MIN;
        for(int i=0;i<a.size();i++)
            maxi = max(maxi, a[i]);
        
        bool flag = 1;
        int ans;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == maxi)
                ans = i;
            else if(maxi < 2*a[i])
            {
                flag = 0;
                break;
            }
        }
        
        if(!flag)
            return -1;
        
        return ans;
    }
};