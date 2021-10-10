class Solution {
public:
    int maxAscendingSum(vector<int>& a) 
    {
        int prev = a[0], sum = a[0];
        int ans = 0;
        
        if(a.size() ==  1)
            return a[0];
        
        for(int i=1;i<a.size();i++)
        {
            if(prev < a[i])
            {
                sum += a[i];
                ans = max(ans, sum);
                prev = a[i];
            }
            
            else
            {
                ans = max(ans, sum);
                sum = a[i];
                prev = a[i];
            }
        }
        
        return ans;
    }
};