class Solution {
public:
    long long minimalKSum(vector<int>& a, int k)
    {
        int n = a.size();
        long long ans = 0;
        sort(a.begin(), a.end());
        
        for(int i=0;i<n&&k>0;i++)
        {
            long long prev = (i==0) ? 0 : a[i-1]; 
            long long cnt = min((long long)k, max((long long)0, (long long)(a[i]-prev-1)));
            
            k -= cnt;
            
            ans += (long long)cnt*(prev+1+prev+cnt)/2;
        }
        
        if(k)
        {
            ans += (long long)k * (a.back()+1+a.back()+k)/2;
        }
        
        return ans;
    }
};