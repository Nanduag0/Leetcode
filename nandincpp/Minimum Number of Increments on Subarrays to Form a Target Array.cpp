class Solution {
public:
    int minNumberOperations(vector<int>& a) 
    {
        int ans = 0, prev = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(prev < a[i])
                ans += a[i] - prev;
            
            prev = a[i];
        }
        
        return ans;
    }
};