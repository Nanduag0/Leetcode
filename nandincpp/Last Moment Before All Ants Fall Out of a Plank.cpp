class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        int maxl = 0;
        for(int i=0;i<left.size();i++)
            maxl = max(maxl, left[i]);
        int maxr = 0;
        for(int i=0;i<right.size();i++)
            maxr = max(maxr, n-right[i]);
        
        int asli_max = max(maxl, maxr);
        return asli_max;
    }
};