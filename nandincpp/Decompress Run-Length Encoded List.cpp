class Solution {
public:
    vector<int> decompressRLElist(vector<int>& a)
    {
        vector<int> ans;
        int n = a.size();
        
        int koto = 0, ki = 1;
        
        while(koto<n && ki<n)
        {
            while(a[koto]--)
                ans.push_back(a[ki]);
            
            koto += 2, ki += 2;
        }
        
        return ans;
    }
};