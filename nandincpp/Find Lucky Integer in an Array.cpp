class Solution {
    map<int, int> m;
public:
    int findLucky(vector<int>& a) 
    {
        for(auto i : a)
        {
            m[i]++;
        }
        
        for(auto it = m.rbegin(); it != m.rend(); ++it )
        {
            if (it->first == it->second)
                return it->first;
        }
            return -1;    
    }
};