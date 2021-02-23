class Solution {
    
    bool ok(int mid, vector<int> &pile, int H)
    {
        int tot = 0;
        
        for(int i=0;i<pile.size();i++)
        {
            tot += (pile[i]/mid);
            
            if(pile[i]%mid)
                tot++;
        }
        
        return tot<=H;
    }
    
public:
    int minEatingSpeed(vector<int>& pile, int H)
    {
        int low = 1, high = (int)(1e9+1);
        
        while(low < high)
        {
            int mid = low + (high-low)/2;
            
            if(ok(mid, pile, H))
                high = mid;
            
            else
                low = mid+1;
        }
        
        return low;
    }
};