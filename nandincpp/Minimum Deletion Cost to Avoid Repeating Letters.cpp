class Solution {
public:
    int minCost(string s, vector<int>& cost) 
    {
        int n = s.size();
        int i = 0, sum = 0;
        
        while(i < n)
        {
            int curr = s[i], maxi = cost[i];
            
            while(curr == s[i+1])
            {
                maxi = max(maxi, cost[i+1]) ;
                i++;
            }
            
            sum += maxi;
            i++;
        }
        
        int total = 0;
        
        for(int i=0;i<n;i++)
            total += cost[i];
        
        return (total - sum);
    }
};