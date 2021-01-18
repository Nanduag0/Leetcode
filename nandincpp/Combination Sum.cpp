class Solution {
    
    void helper(vector<vector<int>> &output, int target, vector<int> &combination, vector<int> &a, int i)
    {
        if(target < 0)
            return ;
        if(target == 0)
            output.push_back(combination);
        
        for(int j=i;j<a.size();j++)
        {
            combination.push_back(a[j]);
            helper(output, target-a[j], combination, a, j);
            
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& a, int target)
    {
        vector<vector<int>> output;
        vector<int> combination;
        
        helper(output, target, combination, a, 0);
        return output;
    }
};