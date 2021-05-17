class Solution {
public:
    int maxWidthRamp(vector<int>& a) 
    {
        stack<int> s;
        
        for(int i=0;i<a.size();i++)
        {
            if(s.empty() || a[i]<a[s.top()])
                s.push(i);
        }
        
        int ans = 0;
        for(int i=a.size()-1;i>=0;i--)
        {
            while(!s.empty() && a[s.top()]<=a[i])
            {
                ans = max(ans, i-s.top());
                s.pop();
            }
        }
        
        return ans;
    }
};