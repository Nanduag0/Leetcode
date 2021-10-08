class Solution {
public:
    int minimumMoves(string s)
    {
        int cnt = 0;
        for(int i=0;i<s.size();)
        {
            if(s[i] == 'O')
                i++;
            else
            {
                cnt++;
                i += 3;
            }
        }
        
        return cnt;
    }
};