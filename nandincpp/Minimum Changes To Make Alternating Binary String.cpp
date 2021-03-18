class Solution {
public:
    int minOperations(string s)
    {
        int n = s.size();
        int x = 0, y = 0;
            
        //case 1
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && s[i]=='0')
                x++;
            else if(i&1 && s[i]=='1')
                x++;
        }
        
        //case 2
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && s[i]=='1')
                y++;
            else if(i&1 && s[i]=='0')
                y++;
        }
        
        return min(x, y);
    }
};