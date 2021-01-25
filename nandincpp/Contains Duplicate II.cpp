class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k)
    {
        map<int, int> m;
        int n = a.size();
        
        for(int i=0;i<n;i++)
        {
            if(m.count(a[i]))
            {
                if(i-m[a[i]] <= k)
                    return true;
            }
            //else 
                m[a[i]] = i;
        }
        
        return false;
    }
};