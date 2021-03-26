class Solution {
    vector<string>res;
    
    vector<int> freq(string s)
    {
        vector<int> ans(26, 0);
        
        for(auto i : s)
            ans[i - 'a']++;
        
        return ans;
    }
    
public:
    vector<string> wordSubsets(vector<string>& a, vector<string>& b)
    {
        vector<int> freqb (26, 0);
        for(auto j : b)
        {
            vector<int> freqinb = freq(j);
            
            for(int i=0;i<26;i++)
                freqb[i] = max(freqinb[i], freqb[i]);
        }
        
        for(auto j : a)
        {
            bool flag = 0;
            vector<int> freqa = freq(j);
            
            for(int i=0;i<26;i++)
            {
                if(freqa[i] < freqb[i])
                {
                    flag = 1;
                    break;
                }
            }
            
            if(!flag)
                res.push_back(j);
        }
        
        return res;
    }
};