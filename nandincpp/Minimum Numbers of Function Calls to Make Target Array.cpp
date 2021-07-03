class Solution {
public:
    int minOperations(vector<int>& a)
    {
        int cnt = 0;
        int n = a.size();
        
        while(1)
        {
            int zero = 0;
            int i;
            
            for(i=0;i<n;i++)
            {
                if(a[i] & 1) 
                    break;
                
                else if(a[i] == 0)
                    zero++;
            }
            
            if(zero == n)
                return cnt;
        
            if(i == n)
            {
                cnt++;
                
                for(int j=0;j<n;j++) 
                    a[j] /= 2;
            }
             
            for(int j=0;j<n;j++)
            {
                if(a[j] & 1)
                {
                    cnt++;
                    a[j]--;
                }
            }
            
        }
        
        return cnt;
    }
};