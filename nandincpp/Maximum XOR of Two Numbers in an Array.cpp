class Solution {
public:
    int findMaximumXOR(vector<int>& a) 
    {
        int maxi = 0, mask = 0;
        
        for(int i=31;i>=0;i--)
        {
            mask |= (1 << i);
            
            unordered_set<int> s;
            for(auto x : a)
            {
                s.insert(x & mask);
            }
            
            int check = maxi | (1<<i);
            
            for(auto x : s)
            {
                if(s.count(x ^ check))
                {
                    maxi = check;
                    break;
                }
            }
        }
        
        return maxi;
    }
};