#define ll long long
class Solution {    
public:
    string kthLargestNumber(vector<string>& a, int k)
    {
        int n = a.size();
        sort(a.begin(), a.end(), [&](auto x, auto y)
             {
                 if(x.size() == y.size())
                 {
                    return x < y;
                 }
                 return x.size() < y.size();
             });
        
        return a[n - k];
    }
};