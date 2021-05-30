class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum)
    {
        int s = colsum.size();
        vector<vector<int>> ans(2, vector<int> (s, 0));
        
        for(int i=0;i<s;i++)
        {
            if(colsum[i] == 2)
            {
                upper--, lower--;
                ans[0][i] = ans[1][i] = 1;
            }
            
            else if(colsum[i] == 1)
            {
                if(upper >= lower)
                {
                    upper--;
                    ans[0][i] = 1;
                }
                
                else
                {
                    lower--;
                    ans[1][i] = 1;
                }
            }
        }
        
        if(upper!= 0 || lower!=0)
            return {};
        
        return ans;
    }
};