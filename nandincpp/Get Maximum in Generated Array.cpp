class Solution {
public:
    int getMaximumGenerated(int n)
    {
        if(n == 1)
            return 1;
        
        vector<int> a(202, 0);
        a[0] = 0, a[1] = 1;
        int i = 1, j = 1;
        
        int temp1, temp2, maxi = 0;
        
        while(1)
        {
            temp1 = 2*i;
            if(temp1 > n)
                break;
            
            maxi = max(maxi, a[i]);
            a[temp1] = a[i];
            i++;
            
            temp2 = 2*j+1;
            if(temp2 > n)
                break;
            
            maxi = max(maxi, a[j]+a[j+1]);
            a[temp2] = a[j]+a[j+1];
            j++;
        }
        
        return maxi;
    }
};