class Solution {
public:
    int countKDifference(vector<int>& a, int k) 
    {
        unordered_map<int, int> m;
        int ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(m.count(a[i]+k))
                ans += m[a[i]+k];
            if(m.count(a[i]-k))
                ans += m[a[i]-k];
            
            m[a[i]]++;
        }
        return ans;
    }
};