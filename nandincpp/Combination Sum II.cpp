class Solution {
    void helper(vector<vector<int>> &output, int target, vector<int> &combination, vector<int> &a, int i)
    {
        if(target < 0)
            return ;
        if(target == 0)
            output.push_back(combination);
        
        for(int j=i;j<a.size();j++)
        {
            if(j>i && a[j]==a[j-1])
                continue;
            
            combination.push_back(a[j]);
            helper(output, target-a[j], combination, a, j+1);
            
            combination.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& a, int target)
    {
         vector<vector<int>> output;
        vector<int> combination;
        sort(a.begin(), a.end());
        
        helper(output, target, combination, a, 0);
        return output;
    }
};