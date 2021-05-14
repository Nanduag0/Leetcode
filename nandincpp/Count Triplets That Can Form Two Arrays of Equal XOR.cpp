class Solution {
public:
    int countTriplets(vector<int>& a) 
    {
        int n = a.size();
        vector<int> pref(n+1);
        
        for(int i=1;i<=n;i++)
        {
            pref[i] = pref[i-1]^a[i-1];
        }
        
        int ans = 0;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                for(int k=j;k<=n;k++)
                {
                    if(pref[j-1]^pref[i-1] == pref[k]^pref[j-1])
                        ans++;
                }
            }
        }
        
        return ans;
    }
};