class Solution {
    vector<vector<int>> ans;
    
    void helper(vector<int> &temp, int i, int n, vector<int> &a)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return ;
        }
        
        temp.push_back(a[i]);
        helper(temp, i+1, n, a);
        
        temp.pop_back();
        helper(temp, i+1, n, a);
    }
public:
    vector<vector<int>> subsets(vector<int>& a)
    {
        vector<int> temp;
        helper(temp, 0, a.size(), a);
        
        return ans;
    }
};