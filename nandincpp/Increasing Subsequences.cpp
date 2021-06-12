class Solution {
    set<vector<int>> result;
    vector<int> temp;
    
    void helper(vector<int> &nums, int index) 
    {
        if (temp.size() > 1)
            result.insert(temp);
    
        for (int i=index; i<nums.size(); ++i)
        {
            if (temp.size() == 0 || nums[i] >= temp.back())
            {
                temp.push_back(nums[i]);
                helper(nums, i+1);
                temp.pop_back();
            }
        }
    }
public:
   vector<vector<int>> findSubsequences(vector<int>& nums)
   {
        helper(nums, 0);
        
        return vector<vector<int>>(result.begin(), result.end());
    }
};