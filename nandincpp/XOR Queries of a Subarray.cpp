class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& queries) 
    {
        vector<int> ans;
        int n = a.size();
        vector<int> pref(n+1);
        
        pref[0] = a[0];
        
        for(int i=1;i<n;i++)
            pref[i] = pref[i-1] ^ a[i];
        
        int temp;
        for(auto i : queries)
        {
            if(i[0] == 0)
                temp = pref[i[1]];
            else
                temp = pref[i[0]-1] ^ pref[i[1]];
            ans.push_back(temp);
        }
        
        return ans;
    }
};