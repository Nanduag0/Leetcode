class Solution {
public:
    int minTimeToType(string word) 
    {
        int ans = 0;
        char now = 'a';
        
        for(auto i : word)
        {
            if(now == i)
                ans++;
            else
            {
                int op1 = abs(now - i);
                int op2 = 26 - op1;
                
                ans += min(op1, op2);
                ans++;
                now = i;
            }
        }
        
        return ans;
    }
};