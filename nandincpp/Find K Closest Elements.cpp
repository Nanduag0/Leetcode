class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x)
    {
        sort(a.begin(), a.end(), [&](int p, int q)
             {
                if(abs(p-x) == abs(q-x))
                    return p<q;
                 
                 return abs(p-x) < abs(q-x);
             });
        
        vector<int> ans;
        for(int i=0;i<k;i++)
            ans.push_back(a[i]);
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};