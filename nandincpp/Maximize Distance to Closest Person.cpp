class Solution {
public:
    int maxDistToClosest(vector<int>& a) 
    
    {
        int n = a.size();
        vector<int> s(n), p(n);
        int prev = -1;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                if(prev == -1)
                    s[i] = INT_MAX;
                else
                    s[i] = i-prev;
            }
            
            else if(a[i] == 1)
            {
                prev = i;
            }
        }
        
        int back = -1;
        
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] == 0)
            {
                if(back == -1)
                    p[i] = INT_MAX;
                else
                    p[i] = -i+back;
            }
            
            else if(a[i] == 1)
            {
                back = i;
            }
        }
        
        int mini, ans, baki = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                mini = min(s[i], p[i]);
                
                if(mini > baki)
                {
                    ans = mini;
                    baki = mini;
                }
            }
        }
        return ans;
    }
};