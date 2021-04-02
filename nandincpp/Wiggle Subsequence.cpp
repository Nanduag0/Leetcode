class Solution {
    
    int sign(int x)
    {
        if(x > 0)
            return 1;
        else if(x < 0)
            return 2;
       
        return 0;
    }
public:
    int wiggleMaxLength(vector<int>& a)
    {       
     
        int prev_sign = 0, n = a.size();
        int cnt = 1;
        
        
        
        for(int i=1;i<n;i++)
        {
            int xx = sign(a[i] - a[i-1]);
            
            if(xx!=prev_sign && xx!=0)
            {
                 cnt++;
                prev_sign = xx;
            }
        }
        
        return cnt;
    }
};