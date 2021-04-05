class Solution {
public:
    int minIncrementForUnique(vector<int>& a)
    {
        int ans = 0;
        sort(a.begin(), a.end());
        
        for(int i=1;i<a.size();i++)
        {
            int prev = a[i-1];
            int now = a[i];
            
            if(prev >= now)
            {
                ans += (prev-now+1);
                a[i] = prev + 1;
            }
        }
        return ans;
    }
};