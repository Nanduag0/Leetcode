class Solution {
    int ans = 0;
public:
    int numSubarraysWithSum(vector<int>& A, int S) 
    {
        vector<int> pref(A.size(), A[0]);
        for(int i=1;i<A.size();i++)
            pref[i] = pref[i-1] + A[i];
        
        map<int, int> m;
        for(int i=0;i<pref.size();i++)
        {
            if(pref[i] == S)
                ans++;
            
            ans += m[pref[i] - S];
            m[pref[i]]++;
        }
        
        return ans;
    }
};