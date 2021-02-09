class Solution {
    set<vector<int>> ans;
    
    void helper(vector<int> &temp, int i, int n, vector<int> &a)
    {
        if(i == n)
        {
            ans.insert(temp);
            return ;
        }
        
        temp.push_back(a[i]);
        helper(temp, i+1, n, a);
        
        temp.pop_back();
        helper(temp, i+1, n, a);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& a)
    {
        vector<int> temp;
        sort(a.begin(),a.end());
        helper(temp, 0, a.size(), a);
        
        vector<vector<int>> s;
        for(auto i=ans.begin();i!=ans.end();i++)
            s.push_back(*i);
        return s;
    }
};