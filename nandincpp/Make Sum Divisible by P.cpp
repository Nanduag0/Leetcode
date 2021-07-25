class Solution {
public:
    int minSubarray(vector<int>& a, int p) 
    {
        int need = 0;
        int n = a.size();
        
        for(auto i : a)
            need = (need + i)%p;
        
        if(need == 0)
            return 0;
        
        unordered_map<int, int> m;
        m[0] = -1;
        int prefix = 0, ans = n;
        
        for(int i=0;i<n;i++)
        {
            prefix = (prefix + a[i])%p;
            int search = (prefix - need)%p;
            
            if(search < 0)
                search += p;
            
            if(m.count(search))
                ans = min(ans, i-m[search]);
            
            m[prefix] = i;
        }
        
        return ans==n ? -1 : ans;
    }
};