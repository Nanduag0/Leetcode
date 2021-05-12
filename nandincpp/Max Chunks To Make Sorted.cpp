class Solution {
public:
    int maxChunksToSorted(vector<int>& a) 
    {
        int koto = 0, now = 0, ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            koto += i;
            now += a[i];
            
            if(koto == now)
                ans++;
        }
        
        return ans;
    }
};