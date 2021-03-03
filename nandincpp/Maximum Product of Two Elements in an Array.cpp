class Solution {
public:
    int maxProduct(vector<int>& a)
    {
        sort(a.begin(), a.end());
        
        return (a[a.size()-1]-1)*(a[a.size()-2]-1);
    }
};