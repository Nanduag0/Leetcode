class Solution {
public:
    int reductionOperations(vector<int>& a) 
    {
        sort(a.rbegin(), a.rend());
        int ans = 0;
        
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i] != a[i+1])
                ans += (i+1);
        }
        
        return ans;
    }
};