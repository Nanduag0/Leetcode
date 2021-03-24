class Solution {
        
    public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {    
        vector<int> freq(10000, 0);
        int ans = 0;
        
        for(int i=0;i<time.size();i++)
        {
            int need1 = 60 - (time[i]%60);
            int need2 = 120 - (time[i]%60);
            
            ans += (freq[need1]) + (freq[need2]);
            
            if(time[i]%60 == 0)
                ans += freq[0];
            
            freq[time[i] % 60]++;
        }
        
        return ans;
    }
};