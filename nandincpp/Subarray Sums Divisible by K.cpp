class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) 
    {
        unordered_map<int, int> m;
        m[0] = 1;
        
        int ans = 0, sum = 0;
        
        for(auto i : a)
        {
            sum += i;
            
            int rem = sum % k;
            
            if(rem < 0)
                rem += k;
            
            if(m.count(rem))
                ans += m[rem];
            m[rem]++;
        }
        
        return ans;
    }
};