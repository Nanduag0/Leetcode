class Solution {
public:
    int minSteps(string s, string t) 
    {
        unordered_map<char, int> sm, tm;
        for(auto i : s)
            sm[i]++;
        for(auto i : t)
        {
            sm[i]--;
        }
        
        int step = 0;
        for(auto i : sm)
        {
            step += abs(i.second);
        }
        
        return step;
    }
};