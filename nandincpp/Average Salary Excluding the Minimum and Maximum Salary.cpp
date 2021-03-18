class Solution {
public:
    double average(vector<int>& salary)
    {
        int mini = INT_MAX, maxi = INT_MIN;
        int sum = 0;
        
        for(int i=0;i<salary.size();i++)
        {
            sum += salary[i];
            maxi = max(maxi, salary[i]), mini = min(mini, salary[i]);
        }
        
        sum -= (mini + maxi);
        
        int n = salary.size()-2;
        //double avg = sum/n;         
        
        return (double)sum/n;
    }
};