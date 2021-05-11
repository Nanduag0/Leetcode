class Solution {
public:
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) 
    {
        vector<pair<int, int>> temp;

        for(auto i : restaurants)
        {
            if(not i[2] and veganFriendly)
                continue;
            if(i[3] > maxPrice)
                continue;
            if(i[4] > maxDistance)
                continue;

            temp.push_back({i[0], i[1]});
        }

        sort(temp.begin(), temp.end(), [&](auto x, auto y)
        {
            if(x.second == y.second)
                return x.first > y.first;

            return x.second>y.second;
        });
        
        vector<int> ans;
        for(auto i: temp)
            ans.push_back(i.first);
        
        return ans;
    }
};