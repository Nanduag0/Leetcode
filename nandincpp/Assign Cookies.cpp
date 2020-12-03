class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i=0, j=0;
        int cnt = 0;
        int n = g.size();//j
        int m = s.size();//i
        
        while(i<m && j<n)
        {
            if(s[i] >= g[j])
            {
                cnt++;
                i++, j++;
            }
            
            else if(g[j] > s[i])
                i++;
        }
        
        return cnt;
    }
};