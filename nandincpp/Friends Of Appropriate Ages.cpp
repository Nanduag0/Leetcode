class Solution {
    bool help(int a, int b)
    {
        return !(b <= 0.5 * a + 7 || b > a || (b > 100 && a < 100));
    }
public:
    int numFriendRequests(vector<int>& ages) 
    {
        unordered_map<int , int> m;
        
        for(auto i : ages)
            m[i]++;
        
        int ans = 0;
        
        for(auto i : m)
        {
            for(auto j : m)
            {
                if(help(i.first, j.first))
                {
                    ans += i.second*(j.second - (i.first==j.first ? 1 : 0));
                }
            }
        }
        
        return ans;
    }
};