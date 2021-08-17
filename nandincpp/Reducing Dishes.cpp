class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) 
    {
        sort(satisfaction.begin(), satisfaction.end());
        
        int pref = 0, ans = 0;
        for(int i=satisfaction.size()-1;i>=0;i--)
        {
            pref += satisfaction[i];
            
            if(pref < 0)
                return ans;
            
            ans += pref;
        }
        
        return ans;
    }
};