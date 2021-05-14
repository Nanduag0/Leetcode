class Solution {
public:
    vector<int> runningSum(vector<int>& a)
    {
        for(int i=1;i<a.size();i++)
            a[i] += a[i-1];
        
        return a;
    }
};