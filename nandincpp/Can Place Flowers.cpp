class Solution {
public:
    bool canPlaceFlowers(vector<int>& a, int n) 
    {
        int nn = a.size(), count = 0;
        
        if(n == 0)
            return true;
        if(n==1 && nn==1)
            return (a[0]==0)?1:0;
        if(n == nn)
            return false;
        
        if(a[0]==0 && a[1]==0)
        {
            count++;
            a[0] = 1;
        }
        
        
        for(int i=1;i<nn-1;i++)
        {
            if(a[i] == 0)
            {
                if(a[i-1]==0 && a[i+1]==0)
                {
                    a[i] = 1;
                    count++;
                }
               
            }
            
        }
        
        if(a[nn-1]==0 && a[nn-2]==0)
            count++;
        
        return (count>=n);
    }
};