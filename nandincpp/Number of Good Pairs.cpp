class Solution {
public:
    int numIdenticalPairs(vector<int>& a) 
    {
        unordered_map<int, int> m;
        int cmt = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(m.count(a[i]))
                cmt += m[a[i]];
            m[a[i]]++;
        }
        return cmt;
    }
};