class Solution {
public:
    int firstMissingPositive(vector<int>& a)
    {
        int n = a.size();
        
        for(int i=0;i<n;i++)
        {
            while(a[i]>=1 && a[i]<=n && a[i]!=a[a[i]-1])
                swap(a[i], a[a[i]-1]);
        }
        
        for(int i=0;i<n;i++)
            if(a[i] != i+1)
                return i+1;
        
        return n+1;
    }
};