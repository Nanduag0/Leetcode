class Solution {
public:
    long long subArrayRanges(vector<int>& a)
    {
        long long res = 0;
        for(int i=0;i<a.size();i++)
        {
            int maxi = a[i], mini = a[i];
            
            for(int j=i;j<a.size();j++)
            {
                mini = min(mini, a[j]);
                maxi = max(maxi, a[j]);
                
                res += (maxi - mini);
            }
        }
        
        return res;
    }
};