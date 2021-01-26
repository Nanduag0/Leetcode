class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0)
            v.push_back(abs(nums[i]));
            
            else nums[abs(nums[i])-1]=-(nums[abs(nums[i])-1]);
        }
        
        for(int i=0;i<nums.size();i++)if(nums[i]>0){v.push_back(i+1);break;}
        return v;

    }
};