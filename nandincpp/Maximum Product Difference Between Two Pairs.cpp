class Solution {
public:
    int maxProductDifference(vector<int>& a) 
    {
        sort(a.begin(), a.end());
        
        int n = a.size();
        int A = a[n-1], b = a[n-2];
        int c = a[0], d = a[1];
        
        A = A*b;
        c = c*d;
        
        return A-c;
    }
};