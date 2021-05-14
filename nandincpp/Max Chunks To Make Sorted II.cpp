class Solution {
public:
    int maxChunksToSorted(vector<int>& a)
    {
        stack<int> s;
        
        for(int i=0;i<a.size();i++)
        {
            int maxi = (s.empty()) ? a[i] : max(maxi, a[i]);
            
            while(!s.empty() && a[i]<s.top())
                s.pop();
            
            s.push(maxi);
        }
        
        return s.size();
    }
};