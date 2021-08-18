class Solution {
public:
    bool increasingTriplet(vector<int>& a) 
    {
       int x = INT_MAX, y = INT_MAX;
        
       for(int i=0;i<a.size();i++)
       {
           if(a[i] <= x)
               x = a[i];
           else if(a[i] <= y)
               y = a[i];
           else
               return 1;
       }
        
        return 0;
    }
};