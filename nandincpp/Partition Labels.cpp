class Solution {
public:
    vector<int> partitionLabels(string s) 
    {
        vector<int> last_occ(26, 0);
        
        for(int i=0;i<s.size();i++)
            last_occ[s[i] - 'a'] = i;
        
        vector<int> ans;
        int start = 0, end_max = 0;
        
        for(int i=0;i<s.size();i++)
        {
            end_max = max(end_max, last_occ[s[i] - 'a']);
            
            if(end_max == i)
            {
                ans.push_back(i-start+1);
                start = end_max + 1;
            }
        }
        
        return ans;
    }
};