class Solution {
public:
    bool isPossibleDivide(vector<int>& hand, int w)
    {
        int n = hand.size();
        
        if(n%w != 0)
            return 0;
        
        map<int, int> m;
        for(auto i : hand)
            m[i]++;
        
        for(auto i : m)
        {
            if(i.second)
            {
                int sec = i.second;
                
                for(int j=1;j<w;j++)
                {
                    if(m[i.first + j] < sec)
                        return 0;
                    
                    m[i.first + j] -= sec;
                }
            }
        }
        
        return 1;
    }
};