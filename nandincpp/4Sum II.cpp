class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d)
    {
        unordered_map<int, int> m;
        for(auto i : a)
        {
            for(auto j : b)
            {
                m[i+j]++;
            }
        }
        
        int cnt = 0;
        for(auto i : c)
        {
            for(auto j : d)
            {
                int temp = i+j;
                if(m.count(-temp))
                    cnt += m[-temp];
            }
        }
        
        return cnt;
    }
};