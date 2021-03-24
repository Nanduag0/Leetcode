class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int minpro=nums[0];
	    int maxpro=nums[0];
	    int ans=nums[0];
	    int choice1=0;
	    int choice2=0;
	    int i=1;
	    if(nums.size()==0)
	    {
	        return -1;
	        
	    }
	    while(i<nums.size())
	    {
	        choice1=nums[i]*minpro;
	        choice2=nums[i]*maxpro;
	        minpro=min(nums[i],min(choice1,choice2));
	        maxpro=max(nums[i],max(choice1,choice2));
	        ans=max(ans,maxpro);
	        i++;
	    }
	    return ans;
    }
};