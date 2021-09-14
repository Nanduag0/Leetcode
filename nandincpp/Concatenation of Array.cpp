class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) 
    {
        int n = a.size();
        vector<int> v(2*n);
        
        for(int i=0;i<n;i++)
        {
            v[i] = a[i];
            v[i+n] = a[i];
        }
        
        return v;
    }
};