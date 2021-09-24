#define ll long long

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& m) 
    {
        ll mini = INT_MAX;
        ll sum = 0, neg = 0;
        
        for(int i=0;i<m.size();i++)
        {
            for(int j=0;j<m[0].size();j++)
            {
                ll x = m[i][j];
                sum += abs(x);
                
                if(x < 0)
                    neg++;
                
                mini = min(mini, abs(x));
            }
        }
        
        if(neg%2 == 0)
            return sum;
        
        return sum - 2*mini;
    }
};