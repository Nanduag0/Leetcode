class Solution {
public:
    int missingNumber(vector<int>& a) 
    {
        int n = a.size();
    
        int total = n*(n+1)/2;
        int sum = 0;
        
        for(int i=0;i<n;i++)
            sum += a[i];
        
    int ans = total - sum;

   return ans;
    }
};