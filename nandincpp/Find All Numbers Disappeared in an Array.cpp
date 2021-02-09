class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a)
    {
        int xxor = 0;
        int n = a.size();
        
        set<int> s;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
            s.insert(a[i]);
        
        for(int i=1;i<=n;i++)
        {
            if(!s.count(i))
                ans.push_back(i);
        }
        
        return ans;
    }
};