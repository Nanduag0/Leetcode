class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0; i<nums.size();i++)
        {
            if(set.count(nums[i])>0)
                return nums[i];
            set.insert(nums[i]);
        }
        return -1;
    }
};