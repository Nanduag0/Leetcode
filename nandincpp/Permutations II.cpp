class Solution {
    set<vector<int>> s;
    
    void helper(vector<int> temp, int i, vector<int> &a)
    {
        if(i == a.size())
        {
            s.insert(temp);
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
    vector<vector<int>> permuteUnique(vector<int>& a)
    {
        vector<int> temp;
        helper(temp, 0, a);
        vector<vector<int>> vv;
        
        for(auto i=s.begin();i!=s.end();i++)
            vv.push_back(*i);
        return vv;
    }
};