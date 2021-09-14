class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) 
    {
        int ans = INT_MAX;
        set<int> dup;
        
        for(int i=0;i<fronts.size();i++)
        {
            if(fronts[i] == backs[i])
                dup.insert(fronts[i]);
        }
        
        for(int i=0;i<fronts.size();i++)
        {
            if(fronts[i] != backs[i])
            {
                if(dup.find(fronts[i]) == dup.end())
                    ans = min(ans, fronts[i]);
                if(dup.find(backs[i]) == dup.end())
                    ans = min(ans, backs[i]);
            }
        }
        
        return ans==INT_MAX ? 0 : ans;
    }
};