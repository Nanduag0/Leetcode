class Solution {
    int dp[202][20004];
    bool subsetSum(vector<int>& nums,int n,int pos,int sum)
    {
        if(sum==0)  //Sum found
            return true;
        else if(pos>=n || sum<0) //Out of bounds
            return false;
        if(dp[pos][sum]!=-1)
            return dp[pos][sum];
        
        return dp[pos][sum] = subsetSum(nums,n,pos+1,sum-nums[pos]) || subsetSum(nums,n,pos+1,sum);
    }
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;++i)
            sum += nums[i];
        
        if(sum & 1)     //ODD sum
            return false;
        
        memset(dp, -1, sizeof(dp));
        return subsetSum(nums,n,0,sum/2);
    }
};
