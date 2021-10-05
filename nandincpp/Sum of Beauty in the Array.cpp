class Solution {
public:
    int sumOfBeauties(vector<int>& a) 
    {
        int n = a.size();
        vector<int> pref(n+1), suff(n+1);
        
        int maxl = a[0];
        for(int i=1;i<n;i++)
        {
            pref[i] = maxl;
            maxl = max(maxl, a[i]);            
        }
        
        int minr = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i] = minr;
            minr = min(minr, a[i]);            
        }
        
        int ans = 0;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]>pref[i] && a[i]<suff[i])
                ans += 2;
            else if(a[i]>a[i-1] && a[i]<a[i+1])
                ans++;
        }
        
        return ans;
    }
};