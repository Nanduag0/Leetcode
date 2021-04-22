class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int cnt = 0, n = s.size(), x = 2*k;
        int i = 0;
        
        while(i < n)
        {
            if(cnt%x == 0)
            {
                if(i+k >= n)
                {
                    reverse(s.begin()+i, s.end());
                }
                else
                reverse(s.begin()+i, s.begin()+i+k);
            }
            
            cnt++, i++;
        }
        
        return s;
    }
};