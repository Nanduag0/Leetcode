class Solution {
    vector<int> ans;
    void helper(int i, int n, int k, int temp, int digit)
    {
        if(i == n)
        {
            ans.push_back(temp);
            return ;
        }
        
        for(int j=0;j<=9;j++)
        {
            if(abs(digit-j) != k)
                continue;
            
            temp = temp*10 + j;
            helper(i+1, n, k, temp, j);
            temp /= 10;
        }
    }
    
public:
    vector<int> numsSameConsecDiff(int n, int k) 
    {
        for(int i=1;i<=9;i++)
        {
            helper(1, n, k, i, i);
        }
        
        return ans;
    }
};