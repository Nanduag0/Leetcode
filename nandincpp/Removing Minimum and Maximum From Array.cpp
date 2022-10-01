class Solution {
public:
    int minimumDeletions(vector<int>& a) 
    {
        int n = a.size();
        
        if(n == 1)
            return 1;
        
        int maxi = a[0], mini = a[0];
        int lp = 0, hp = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] < mini)
            {
                mini = a[i];
                lp = i;
            }
            
            if(a[i] > maxi)
            {
                maxi = a[i];
                hp = i;
            }
        }
        
        return min({max(lp, hp)+1, n-min(lp, hp), min(lp, hp)+1+n-max(lp, hp)}); 
    }
};