class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) 
    {
        int n = properties.size();
        sort(properties.begin(), properties.end(), [&](auto& x, auto& y)
             {
                 if(x[0] == y[0])
                     return x[1]>y[1];
                 
                 return x[0]<y[0];
             });
        
        int temp = properties[n-1][1];
        int ans = 0;
        
        for(int i=n-1;i>=0;i--)
        {
            if(properties[i][1] < temp)
                ans++;
            
            temp = max(temp, properties[i][1]);
        }
        
        return ans;
    }
};