class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) 
    {
        int n = a.size();
        
        if(n == 0)
            return a;
        
        vector<int> v = a;
        map<int, int> m;
        
        sort(v.begin(), v.end());
        int rank = 1;
        
        m[v[0]] = 1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i] != v[i-1])
                rank++;
            
            m[v[i]] = rank;
        }
        
        for(int i=0;i<n;i++)
            a[i] = m[a[i]];
        
        return a;
    }
};