class Solution {
    int ans = 0;
public:
    int waysToMakeFair(vector<int>& a) 
    {
        int n = a.size();
        if(n == 1)
            return 1;
            
        vector<int> pref(n+1, 0);
        vector<int> suff(n+1, 0);
        
        pref[0] = a[0];
        pref[1] = a[1];
        for(int i=2;i<n;i++)
            pref[i] = pref[i-2] + a[i];
        
        suff[n-1] = a[n-1];
        suff[n-2] = a[n-2];
        for(int i=n-2;i>=0;i--)
            suff[i] = suff[i+2] + a[i];
        
        for(int i=0;i<n;i++)
        {
            int odd = 0, even = 0;
            
            even += (i-2>=0)?pref[i-2]:0;
            odd += (i-1>=0)?pref[i-1]:0;
            
            even += (i+1<n)?suff[i+1]:0;
            odd += (i+2<n)?suff[i+2]:0;
            
            if(odd == even)
                ans++;
        }
        
        return ans;
    }
};