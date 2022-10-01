class Solution {
public:
    int triangularSum(vector<int>& a) 
    {
        int n = a.size();
        while(n > 1)
        {
            for(int i=0;i<n-1;i++)
                a[i] = (a[i] + a[i+1])%10;
            
            a.pop_back();
            n = a.size();
        }
        
        return a[0];
    }
};