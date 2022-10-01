class Solution {
    int fun(string s, int k, char c)
    {
        int ans = 0;
        int start = 0, cnt = 0;
        
        for(int e=0;e<s.size();e++)
        {
            if(s[e] != c)
                cnt++;
            
            while(cnt > k)
            {
                if(s[start] != c)
                    cnt--;
                
                start++;
            }
            
            ans = max(ans, e-start+1);
        }
        
        return ans;
    }
    
public:
    int maxConsecutiveAnswers(string s, int k)
    {
        return max(fun(s, k, 'T'), fun(s, k ,'F'));
    }
};