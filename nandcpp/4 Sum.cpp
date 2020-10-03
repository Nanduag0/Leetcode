class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<int> :: iterator it;
        vector<vector<int>> vern;
        vector<vector<int>> :: iterator itr;
        vector<vector<int>> ans ;
        sort(nums.begin(),nums.end());
        int j,k,m;
        if(nums.size()==0 || nums.size()<4)
        {
            return vern;
        }
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
            int k=j+1;
            int m=nums.size()-1;
            while(k<m)
            {
                int sum=nums[i]+nums[j]+nums[k]+nums[m];
                if(sum==target)
                {
                     vector<int> v;
                     v.push_back(nums[i]);
                     v.push_back(nums[j]);
                     v.push_back(nums[k]);
                     v.push_back(nums[m]);
                     vern.push_back(v);
                }
                 if(sum<target)
              {
                    // j++;
                     k++;
               }
            else
                 m--;             
                 }
            }
          } 
         for(itr=vern.begin();itr!=vern.end();itr++)
         {
             if(find(ans.begin(),ans.end(),*itr)==ans.end())
             {
                 ans.push_back(*itr);
             }
         }
     return ans;
    }
};