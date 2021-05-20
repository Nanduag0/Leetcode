class Solution {
public:
    string pushDominoes(string s)
    {
        int n = s.size();
        vector<int> left_ka_r(n+1, 0), right_ka_l(n+1, 0);
        
        int r = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'L')
            {
                r = INT_MAX;
            }
            
            else if(s[i] == 'R')
            {
               r = i; 
            }
            
            left_ka_r[i] = (r==INT_MAX) ? INT_MAX : i-r;
        }
        
        int l = INT_MAX;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i] == 'L')
            {
                l = i;
            }
            
            else if(s[i] == 'R')
            {
               l = INT_MAX; 
            }
            
            right_ka_l[i] = (l==INT_MAX) ? INT_MAX : l-i;
        }
        
        string ans = "";
        for(int i=0;i<n;i++)
        {
            if(right_ka_l[i] == left_ka_r[i])
                ans += '.';
            else if(right_ka_l[i] > left_ka_r[i])
                ans += 'R';
            else if(right_ka_l[i] < left_ka_r[i])
                ans += 'L';
        }
        
        return ans;        
    }
};