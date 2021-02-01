class Solution {
    vector<vector<int>> ans;
    
    void helper(vector<int> &temp, int i, int k, int n)
    {
        if(k == 0)
        {
            ans.push_back(temp);
            return ;
        }
        
        if(i > n)
            return ;
        
        temp.push_back(i);
        helper(temp, i+1, k-1, n);
        temp.pop_back();
        
        helper(temp, i+1, k, n);
    }
    
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> temp;
        helper(temp, 1, k, n);
        
        return ans;
    }
};