class Solution {
    int n;
    
    bool check(vector<int>& pos, int mid, int m)
    {
        int prev = -1;
        int tot =  0;
        
         //n = pos.size();
        for(int i=0;i<pos.size();i++)
        {
            if(pos[i]-prev>=mid || prev == -1)
            {
                tot++;
                prev = pos[i];
            }
        }
        return (tot >= m);
    }
    
public:
    int maxDistance(vector<int>& pos, int m) 
    {
        int low = 1, high = 1e9+1, mid;
        sort(pos.begin(), pos.end());
        int ans = -1;
        
        while(low <= high)
        {
            
            mid = low + (high-low)/2;
            
            if(check(pos, mid, m))
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return ans;
    }
};