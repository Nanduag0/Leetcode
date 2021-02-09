class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& a)
    {
        int n = a.size();
        vector<int> pref(n+1, 0), suff(n+1, 0);
        pref[0] = a[0];
        
        for(int i=1;i<n;i++)
        {
            pref[i] = pref[i-1] + a[i];
        }
        
        suff[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suff[i] = suff[i+1] + a[i];
        }
        
        vector<int> ans;
        int op1 = suff[1] - ((n-1)*a[0]);
        ans.push_back(op1);
        
        for(int i=1;i<=n-2;i++)
        {
            int op2 = (i*a[i]) - (pref[i-1]) - ((n-i-1)*a[i]) + suff[i+1];
            ans.push_back(op2);
        }
        
        int op3 = (n-1)*a[n-1] - pref[n-2];
        ans.push_back(op3);
        
       
        return ans;
    }
    
};