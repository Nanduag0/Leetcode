class Solution {
public:
    bool check(vector<int>& nums)
    {
        int n=nums.size();
        
        if(is_sorted(nums.begin(),nums.end()))
        {
            return 1;
        }
        
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                count++;
            }
        }
        
        if(count==1&&nums[0]>=nums[nums.size()-1])
        {
            return 1;
        }
        return 0;
    }
};