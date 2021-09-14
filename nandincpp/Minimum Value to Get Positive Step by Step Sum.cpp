class Solution {
public:
    int minStartValue(vector<int>& a) 
    {
        int mini = 0;
        int sum = 0;
        
        for(auto i : a)
        {
            sum += i;
            mini = min(mini, sum);
        }
        
        return 1-mini;
    }
};