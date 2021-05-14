class Solution {
public:
    int maxScore(string s) 
    {
        int one = 0, sum = 0, zero = 0;
        for(auto i : s)
            if(i == '1')
                one++;
        
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == '1')
            {
                one--;
            }
            
            if(s[i] == '0')
                zero++;
            
            sum = max(sum, zero+one);
        }
        return sum;
    }
};