class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        int i;
        vector<int>  :: iterator itr;
        itr=find(nums.begin(),nums.end(),1);
        if(itr==nums.end())
        {
            return 1;
        }
     sort(nums.begin(),nums.end());
     for( i=1;i<nums.size();i++)
     {
         if(nums[i]==(nums[i-1]+1) || nums[i]==nums[i-1])
             continue;
         else if(nums[i-1]+1>0)
             break;
    }
        return nums[i-1]+1;
    }
};