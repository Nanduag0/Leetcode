class Solution {
    
    set<int> ss;
    void helper(int low, int high, int idx)
    {
        if(idx > 9)
            return ;
        
        int ans = 0;
        for(int i=idx;i<=9;i++)
        {
            ans = ans*10 + i;
            
            if(ans>=low && ans<=high)
                ss.insert(ans);
        }
        
        helper(low, high, idx+1);
    }
    
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        helper(low, high, 0);
        vector<int> ans;
        
        for(auto i : ss)
            ans.push_back(i);
        
        return ans;
    }
};