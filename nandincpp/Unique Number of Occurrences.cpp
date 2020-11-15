class Solution {
public:
    bool uniqueOccurrences(vector<int>& a)
    {
        map<int, int> freq;
        
        for(int i=0;i<a.size();i++)
            freq[a[i]]++;
        
        set<int> s;
        
        for(auto i : freq)
        {
            if(s.count(i.second) > 0)
                return false;
            
            else
                s.insert(i.second);
        }
        
        return true;
    }
};