class Solution {
public:
    int longestConsecutive(vector<int>& a)
    {
        map<int, int> m;
        int prev =-1, now = 1;
        int maxi = 0;
        
        if(a.size() == 0)
            return 0;
        
        for(auto i : a)
            m[i]++;
        
        for(auto i : m)
        {
            if(!m.count(i.first-1))
            {
                maxi = max(maxi, now);
                now = 1;
            }
            
            else
                now++;
        }
        
        maxi = max(maxi, now);
        return maxi;
    }
};