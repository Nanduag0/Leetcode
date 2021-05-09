class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    {
        vector<int> m(101);
        
        for(auto i : logs)
        {
            m[i[0] - 1950]++;
            m[i[1] - 1950]--;
        }
        
        int curr = 0, max = 0;
        int ans;
        for(int i=0;i<101;i++)
        {
            curr += m[i];
            
            if(curr > max)
            {
                max = curr;
                ans = i;
            }
        }
        
        return ans+1950;
    }
};