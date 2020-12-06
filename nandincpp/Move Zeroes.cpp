class Solution {
public:
    void moveZeroes(vector<int>& nums) 
        
    {
    int index=0;
        int len=nums.size();
        int zc=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=0)
            {
                nums[index]=nums[i];
                index++;
            }
        }
        for(int i=index;i<len;i++)
        {
            nums[i]=0;
        }
        
    }
    
};