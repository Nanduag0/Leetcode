class Solution {
public:
    int findFinalValue(vector<int>& a, int ori) 
    {
        unordered_map<int, bool> m;
        for(auto i : a)
        {
            m[i] = 1;
        }
        
        int ans;
        while(1)
        {
            if(!m.count(ori))
            {
                ans = ori;
                break;
            }
            
            else if(m.count(ori))
            {
                ori = 2*ori;
            }
        }
        
        return ans;
    }
};