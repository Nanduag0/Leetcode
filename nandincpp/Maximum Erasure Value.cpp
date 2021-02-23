class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
       int start=0,sum=0,res=0;
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++)
       {
           sum+=nums[i];
           mp[nums[i]]++;
           while(start<nums.size()&&mp[nums[i]]>1)
           {
               mp[nums[start]]--;
               sum-=nums[start];
               start++;
           }
           res=max(sum,res);
       }
       return res;
    }
};