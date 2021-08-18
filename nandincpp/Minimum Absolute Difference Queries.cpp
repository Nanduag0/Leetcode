class Solution {
   // vector<vector<int>> pref;
    vector<int> res;
    
public:
    vector<int> minDifference(vector<int>& a, vector<vector<int>>& q)
    {
        int pref[100005][105] = {};
        for(int i=0;i<a.size();i++)
        {
            for(int j=1;j<=100;j++)
            {
                pref[i+1][j] = pref[i][j] + (a[i] == j);
            }
        }
        
        for(auto i : q)
        {
            int l = i[0], r = i[1];
            int prev = -1, ans = INT_MAX;
            
            for(int j=0;j<=100;j++)
            {
                if(pref[r+1][j]-pref[l][j] <= 0)
                    continue;
                
                if(prev!=-1)
                    ans = min(ans, j-prev);
                
                prev = j;
            }
            
            res.push_back(ans==INT_MAX ? -1 : ans);
        }
        
        return res;
    }
};