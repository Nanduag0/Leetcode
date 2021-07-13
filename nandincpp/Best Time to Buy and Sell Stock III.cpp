class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int fb = INT_MIN;
        int fs = 0;
        int sb = INT_MIN;
        int ss = 0;
        
        for(auto i : prices)
        {
            fb = max(fb, -i);
            fs = max(fs, i+fb);
            sb = max(sb, fs-i);
            ss = max(ss, sb+i);
        }
        
        return ss;
    }
};