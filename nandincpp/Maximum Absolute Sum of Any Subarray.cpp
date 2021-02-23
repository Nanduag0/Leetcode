class Solution {
public:
    int maxAbsoluteSum(vector<int>& a)
    {
        int nega = 0, posi = 0;
        int ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            nega += a[i];
            posi += a[i];
            
            if(posi < 0)
                posi = 0;
            if(nega > 0)
                nega = 0;
            
            ans = max({ans, abs(nega), posi});
        }
        
        return ans;
    }
};