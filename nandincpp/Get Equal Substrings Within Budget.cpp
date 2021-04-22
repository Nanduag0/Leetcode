class Solution {
public:
    int equalSubstring(string s, string t, int cost) 
    {
        int n = s.size();
        vector<int> v(n);
        
        for(int i=0;i<n;i++)
            v[i] = abs(t[i]-s[i]);
        
        int start = 0, end = 0, ans = 0, sum = 0;
        while(start<n && end<n)
        {
            sum += v[end];
            
            if(sum > cost)
            {
               while(sum > cost)
               {
                   sum -= v[start];
                   start++;
               }
            }
            
            ans = max(ans, end-start+1);
            end++;
        }
        
        return ans;
    }
};