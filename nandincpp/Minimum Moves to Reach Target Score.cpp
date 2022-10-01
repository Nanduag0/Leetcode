class Solution {
public:
    int minMoves(int target, int maxDoubles) 
    {
        int ans = 0;
        
        while(target > 1)
        {
            if(target%2==0 && maxDoubles>0)
            {
                maxDoubles--;
                target /= 2;
            }
            
            else
                target--;
            
            ans++;
            if(maxDoubles == 0)
                break;
        }
        
        return ans + (target-1);
    }
};