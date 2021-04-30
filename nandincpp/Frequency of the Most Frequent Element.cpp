class Solution {
public:
    int maxFrequency(vector<int>& nums, int k)
    {
        int res = 0, size = nums.size();
       // int ops;
        sort(nums.begin(), nums.end());
        
        for (int i = size - 1, j = size - 1,  ops = 0; i >= 0; --i)
        {
           //;
            ops += nums[j] - nums[i];
            
            while (ops > k)
            {
                j--;
                while (nums[j] == nums[j + 1])
                {
                    j--;
                }
                
                ops -= (j - i + 1) * (nums[j + 1] - nums[j]);
            }
            
            res = max(res, j - i + 1);
        }
        
        return res;
    }
};