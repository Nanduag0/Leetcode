class Solution {
public:
    vector<int> decode(vector<int>& encoded) 
    {
        int n = encoded.size()+1;
        int xorr = 0;
        
        for(int i=0;i<=n;i++)
            xorr ^= i;
        for(int i=1;i<n-1;i+=2)
            xorr ^= encoded[i];
        
        vector<int> a(n);
        a[0] = xorr;
        
        for(int i=1;i<n;i++)
            a[i] = encoded[i-1] ^ a[i-1];
        
        return a;
    }
};