class Solution {
    vector<vector<int>> ans;
    
    void helper(vector<int> temp, int i, vector<int> &a)
    {
        if(i == a.size())
        {
            ans.push_back(temp);
            return ;
        }
        
        for(int j=i;j<a.size();j++)
        {
            swap(a[i], a[j]);
            temp.push_back(a[i]);
            helper(temp, i+1, a);
            
            temp.pop_back();
            swap(a[i], a[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& a)
    {
        vector<int> temp;
        helper(temp, 0, a);
        return ans;
    }
};