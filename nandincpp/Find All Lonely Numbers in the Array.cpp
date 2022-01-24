class Solution {
public:
    vector<int> findLonely(vector<int>& a) 
    {
        unordered_map<int, int> m;
        
        for(int i=0;i<a.size();i++)
            m[a[i]]++;
        
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            if(m[a[i]] > 1)
                continue;
            else if(m.count(a[i]+1) || m.count(a[i]-1))
                continue;
            else
                ans.push_back(a[i]);
        }
        
        return ans;
    }
};