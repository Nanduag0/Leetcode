class Solution {
    vector<int> ans;
public:
    vector<int> sumZero(int n) 
    {
        bool flag = 0;
        if(n&1)
        {
            flag = 1;
            n--;
        }
        
        for(int i=0;i<n/2;i++)
            ans.push_back(i+1);
        for(int j=0;j<n/2;j++)
            ans.push_back(-j-1);
        
        if(flag)
            ans.push_back(0);
        
        return ans;
    }
};