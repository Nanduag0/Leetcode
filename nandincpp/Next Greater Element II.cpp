class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) 
    {
        stack<int> s;
        int i = 0, n = a.size();
        vector<int> ans(n, -1);
        
        while(i < 2*n)
        {
            while(!s.empty() && a[i%n]>a[s.top()])
            {
                int index = s.top();
                ans[index] = a[i%n];
                
                s.pop();
            }
            
            s.push(i%n);
            i++;
        }
        
        return ans;
    }
};