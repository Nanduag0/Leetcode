class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) 
    {
        set<int> s1,s2;
        
        for(int i=0;i<a.size();i++)
            s1.insert(a[i]);
        for(int i=0;i<b.size();i++)
            s2.insert(b[i]);
        
        vector<int> ans;
        
        for(auto j=s1.begin();j!=s1.end();j++)
        {
            if(s2.count(*j))
                ans.push_back(*j);
            
        }
        
        return ans;
    }
};