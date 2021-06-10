class Solution {
public:
    int maximumGain(string s, int x, int y) 
    {
        int a = 0, b = 0;
        int ans1 = 0, ans2 = 0;
        
        // case 1 
        for(auto i : s)
        {
            if(i == 'a')
                a++;
            else if(i == 'b')
            {
                if(a > 0)
                {
                    ans1 += x;
                    a--;
                }
                
                else
                    b++;
            }
            
            else
            {
                ans1 += min(a, b)*y;
                a = b = 0;
            }
        }
        ans1 += min(a, b)*y;
        
        // case 2
        a = b = 0;
        for(auto i : s)
        {
            if(i == 'b')
                b++;
            else if(i == 'a')
            {
                if(b > 0)
                {
                    ans2 += y;
                    b--;
                }
                
                else
                    a++;
            }
            
            else
            {
                ans2 += min(a, b)*x;
                a = b = 0;
            }
        }
        ans2 += min(a, b)*x;
        
        return max(ans1, ans2);
    }
};