class Solution {
public:
    bool find132pattern(vector<int>& a) 
    {
        int n = a.size();
        vector<int> mini(n);
        
        mini[0] = a[0];
        
        for(int i=1;i<n;i++)
            mini[i] = min(a[i], mini[i-1]);
        
        stack<int> s;
        
        for(int i=n-1;i>=0;i--)
        {
            if(a[i] > mini[i])
            {
                while(!s.empty() && s.top()<=mini[i])
                    s.pop();
                
                if(!s.empty() && s.top()<a[i])
                    return 1;
            }
            
            s.push(a[i]);
        }
        
        return 0;
    }
};