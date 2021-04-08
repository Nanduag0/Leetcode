class Solution {
    bool inc = 1, dec = 1;
public:
    bool isMonotonic(vector<int>& a)
    {
        for(int i=1;i<a.size();i++)
        {
            if(a[i] < a[i-1])
                inc = 0;
            else if(a[i] > a[i-1])
                dec = 0;
        }
        return inc||dec;
    }
};