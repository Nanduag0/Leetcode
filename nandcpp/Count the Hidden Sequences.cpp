class Solution {
public:
    int numberOfArrays(vector<int>& d, int lower, int upper) 
    {
        long maxi, mini, sum;
        maxi = mini = sum = 0;
        
        for(auto i : d)
        {
            sum += i;
            
            maxi = max(maxi, sum);
            mini = min(mini, sum);
        }
        
        return max(0L, (upper-maxi)+(mini-lower)+1);
    }
};