class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums)
    {
        int n = nums.size();
        
        int m1 = 0;    
        int m2 = 0; 
        
        for(int i=0;i<n;i+=2)
        {
            int mini = INT_MAX;
           
            if(i-1>=0)
            {
                mini = min(mini,nums[i-1]);
            }
            if(i+1<=n-1)
            {
                mini = min(mini,nums[i+1]);
            }
            if(mini > nums[i])
                continue;
            m1 +=  (nums[i]-mini+1);
        }
        
        for(int i=1;i<n;i+=2)
        {
            int mini = INT_MAX;
        
            if(i-1>=0)
            {
                mini = min(mini,nums[i-1]);
            }
            if(i+1<=n-1)
            {
                mini = min(mini,nums[i+1]);
            }
            
            if(mini > nums[i])
                continue;
            m2 +=  (nums[i]-mini+1);
        }
        return min(m1,m2);
    }
};