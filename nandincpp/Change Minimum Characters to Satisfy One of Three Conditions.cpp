class Solution {
    
    int cond(string& a, string& b)
    {
        int ans = INT_MAX;
        
        for(char c='a';c<'z';c++)
        {
            int count = 0;
            
            for(auto i : a)
            {
                if(i > c)
                    count++;
            }
            for(auto i : b)
            {
                if(i <= c)
                    count++;
            }
            
            ans = min(ans, count);
        }
        return ans;
    }
    
public:
    int minCharacters(string a, string b)
    {
        int cond1 = cond(a, b), cond2 = cond(b, a);
        int ans = INT_MAX;
        
        for(char c='a';c<='z';c++)
        {
            int count = 0;
            
            for(auto i : a)
            {
                if(i != c)
                    count++;
            }
            for(auto i : b)
            {
                if(i != c)
                    count++;
            }
            
            ans = min(ans, count);
        }
        
        return min({cond1, cond2, ans});
    }
};