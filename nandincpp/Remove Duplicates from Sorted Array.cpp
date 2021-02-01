class Solution {
public:
    int removeDuplicates(vector<int>& a)
    {
        set<int> s;
        for(int i=0;i<a.size();i++)
            s.insert(a[i]);
        
        a.clear();
        for(auto i=s.begin();i!=s.end();i++)
            a.push_back(*i);
        
        return a.size();
    }
};