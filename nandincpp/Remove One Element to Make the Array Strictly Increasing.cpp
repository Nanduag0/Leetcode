class Solution {
public:
    bool canBeIncreasing(vector<int>& a) 
    {
        int prev = a[0];
        bool cnt = 0;
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i] <= prev)
            {
                if(cnt)
                    return 0;
                
                cnt = 1;
                
                if(i==1 || a[i]>a[i-2])
                    prev = a[i];
            
            }
            else
                prev = a[i];
        }
        
        return 1;
    }
};