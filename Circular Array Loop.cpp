class Solution {
    
    int next(vector<int>a , int pos)
    {
        //int n= ;
        return (a.size()+a[pos]+pos)%a.size();
    }
    
public:
    bool circularArrayLoop(vector<int>& a)
    {
        int n= a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
                continue;
            
            int fast = i, slow = i;
            
            while(a[slow]*a[next(a,slow)] > 0 && a[fast]*a[next(a,fast)] > 0 && a[fast]*a[next(a,next(a,fast))] > 0)
            {
                slow = next(a,slow);
                fast = next(a, next(a,fast));
                
                if(fast == slow)
                {
                    if(slow == next(a, slow))
                        break;
                    
                    return true;
                }
            }
            
            slow = i;
            int val = a[slow];
            
            while(val * a[slow] > 0)
            {
                int x = slow;
               
                slow = next(a, slow);
                 a[x] = 0;
            }                 
                 
        }
        
        return false;
    }
};