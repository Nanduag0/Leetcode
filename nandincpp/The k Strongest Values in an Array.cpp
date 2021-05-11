class Solution {
    int median(vector<int> &a)
    {
        int n = a.size();
        
        sort(a.begin(), a.end());
        
            return a[(n-1)/2];
    }
    
public:
    vector<int> getStrongest(vector<int>& a, int k)
    {
        int m = median(a);
        
        sort(a.begin(), a.end(), [&](auto &x, auto &y)
             {
                 if(abs(x-m) == abs(y-m))
                     return x > y;
                 
                return (abs(x-m) > abs(y-m));
             });
        
        return {a.begin(), a.begin()+k};
    }
};