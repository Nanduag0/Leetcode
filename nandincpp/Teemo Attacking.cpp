class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int duration) 
    {
        int n = time.size();
        
        if(n == 0)
            return 0;
        
        int sum = 0;
        for(int i=0;i<n-1;i++)
        {
            sum += min(duration, time[i+1]-time[i]);
        }
        
        return sum+duration;
    }
};