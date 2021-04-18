class Solution {
    long long is_suum(long long n)
    {
        return n*(n+1)/2;
    }
    
public:
    int numTimesAllBlue(vector<int>& lights) 
    {
        long long cnt = 0, sum = 0;
        for(long long i=0;i<lights.size();i++)
        {
            sum += lights[i];
            
            if(is_suum(i+1) == sum)
                cnt++;
        }
        return cnt;
    }
};