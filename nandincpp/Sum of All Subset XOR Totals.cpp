class Solution {
    int n;
   int ans ;//= 0;
    
    void help(vector<int>& a, int i, int xoor)
    {
        if(i == n)
        {
            ans += xoor;
            return ;
        }
        
        help(a, i+1, xoor);
        help(a, i+1, xoor^a[i]);
    }
    
public:
    int subsetXORSum(vector<int>& a) 
    {
        ans = 0;
        n = a.size();
        
       help(a, 0, 0);
        return ans;
    }
};