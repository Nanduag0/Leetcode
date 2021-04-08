class Solution {
    const int mod = 1e9 + 7;
public:
    int minAbsoluteSumDiff(vector<int>& a1, vector<int>& a2) 
    {
        int n = a1.size();
        vector<int> diff(n), temp(n);
        int sum = 0;
        
        for(int i=0;i<n;i++)
        {
            diff[i] = abs(a1[i] - a2[i]);
            sum += diff[i];
            sum %= mod;
        }  
        
        sort(a1.begin(), a1.end());
        
        for(int i=0;i<n;i++)
        {
            int j = lower_bound(a1.begin(), a1.end(), a2[i]) - a1.begin();
            
            if(j!=0 && j!=n)
            {
                temp[i] = min(abs(a2[i]-a1[j]), abs(a2[i]-a1[j-1]));
            }
            else if(j == 0)
                temp[i] = abs(a2[i] - a1[j]);
            else if(j == n)
                temp[i] = abs(a2[i] - a1[j-1]);
        }
        
        int best = 0;
        for(int i=0;i<n;i++)
        {
            best = max(best, diff[i]-temp[i]);
        }
        
        return sum-best;
    }
};