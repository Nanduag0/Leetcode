class Solution {
public:
     vector<int> avoidFlood(vector<int>& rains)
     {
        vector<int> ans(rains.size(), -1);
        unordered_map<int, int> previous;
       set<int> dryDays;
        
        for (int i = 0; i < rains.size(); i++) 
        {
            if (rains[i] == 0) 
            {
                dryDays.insert(i);
                ans[i] = 11;
            }
            else 
            {
                if (previous.count(rains[i]) > 0)
                {
                    auto it = dryDays.upper_bound(previous[rains[i]]);
                
                    if (it == dryDays.end())
                        return {};
                    
                   
                    ans[*it] = rains[i];
                    dryDays.erase(it);
                }
                previous[rains[i]] =  i;
            }
        }
        return ans;       
    }
};