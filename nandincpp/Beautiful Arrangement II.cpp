class Solution {
    vector<int> a;
public:
    vector<int> constructArray(int n, int k) 
    {
        int low = 1, high = k+1;
        int i;
        a.resize(n);
        
        for(i=0;i<=k;i++)
        {
            if(i%2 == 0)
                a[i] = low, low++;
            else 
                a[i] = high, high--;
        }
        
        for(;i<n;i++)
        {
            a[i] = i+1;
        }
        
        return a;
    }
};