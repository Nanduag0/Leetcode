class Solution {
    int power(int x)
    {
        int ans = 0;
        
        while(x != 1)
        {
            ans++;
            
            if(x & 1)
                x = 3*x + 1;
            else
                x /= 2;
        }
        return ans;
    }
    
public:
    int getKth(int lo, int hi, int k) 
    {
        int n = hi - lo + 1;
        vector<pair<int, int>> v;
        
        for(int i=lo;i<=hi;i++)
        {
            v.push_back({power(i), i});
        }
        
        sort(v.begin(), v.end());
        
        return  v[k-1].second;
    }
};