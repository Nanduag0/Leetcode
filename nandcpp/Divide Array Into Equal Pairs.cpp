class Solution {
public:
    bool divideArray(vector<int>& a) 
    {
        unordered_map<int, int> m;
        for(auto i : a)
            m[i]++;
        
        for(auto i : m)
        {
            if(i.second%2 == 1)
                return 0;
        }
        
        return 1;
    }
};