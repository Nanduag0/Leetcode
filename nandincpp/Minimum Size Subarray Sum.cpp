class Solution {
public:
    int minSubArrayLen(int s, vector<int>& a) 
    {
        int left = 0, sum = 0;
        int ans = INT_MAX;
        
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            
            while(sum >= s)
            {
                ans = min(ans, i-left+1);
                sum -= a[left];
                left++;
            }
        }
        
        return ans==INT_MAX ? 0 : ans;
    }
};