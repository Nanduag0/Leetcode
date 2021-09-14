class Solution {
public:
    int maxNonOverlapping(vector<int>& a, int target) 
    {
        set<int> s;
        s.insert(0);
        int sum = 0;
        
        int ans = 0;
        for(auto i : a)
        {
            sum += i;
            
            if(s.count(sum - target))
            {
                ans++;
                s.clear();
                s.insert(0);
                sum = 0;
            }
            else
                s.insert(sum);
        }
        
        return ans;
    }
};