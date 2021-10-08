class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n)
    {
        int sum = 0, m = rolls.size();
        for(int i=0;i<rolls.size();i++)
            sum += rolls[i];
        
        int tot = m+n;
        int need = mean*tot;
        need = need - sum;
        
        if(need < 0)
            return {};
        
        if(need<n || need>6*n)
            return {};
        
        int each = need/n;
        int rem = need % n;
        
        vector<int> ans(n, each);
        for(int i=0;i<rem;i++)
            ans[i]++;
        
        return ans;
    }
};