class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& tar)
    {
        vector<int> ans(3,0);
        for(auto tri:triplets)
        {
            if(tri[0]<=tar[0] and tri[1]<=tar[1] and tri[2]<=tar[2])
            {
                ans[0]=max(tri[0],ans[0]);
                ans[1]=max(tri[1],ans[1]);
                ans[2]=max(tri[2],ans[2]);
            }
        }
        
        return tar==ans;
    }
};