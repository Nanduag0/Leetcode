class Solution {
public:
    bool canReorderDoubled(vector<int>& a) 
    {
        int n = a.size();
        unordered_map<int, int> m;
        sort(a.begin(), a.end(), [&](int x, int y)
             {
                 return abs(x) < abs(y);
             });
        //for(int i=0;i<n;i++)
            //cout<<a[i]<<" ";
        
        for(int i=0;i<n;i++)
            m[a[i]]++;
        
        for(int i=0;i<n;i++)
        {
            if(m[a[i]] == 0)
                continue;
            
            if(m[2*a[i]] == 0)
                return 0;
            
            m[a[i]]--;
            m[2*a[i]]--;
        }
        
        return 1;
    }
};