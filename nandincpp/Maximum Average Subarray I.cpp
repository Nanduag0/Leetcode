class Solution {
public:
    double findMaxAverage(vector<int>& a, int k)
    {
        double sum = 0;
        int x;
        
        for(x=0;x<k;x++)
            sum += (double)a[x];
        
        double avg = sum/k;
        double ans = avg;
        
        while(x < a.size())
        {
            sum -= a[x-k];
            sum += a[x];
            x++;
            
            double temp = sum/k;
            ans = max(ans, temp);
        }
        
        return ans;
    }
};