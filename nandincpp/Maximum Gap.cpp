class Solution {
public:
    int maximumGap(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        int ans = INT_MIN;
        
        int n = nums.size();
        if(n < 2)
            return 0;
        
        for(int i=1;i<n;i++)
        {
            ans = max(ans, nums[i]-nums[i-1]);
        }
        return ans;
    }
};