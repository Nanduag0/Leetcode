class Solution {
public:
    int thirdMax(vector<int>& a)
    {
        sort(a.begin(), a.end(), greater<int>());
        vector<int> ans;
        ans.push_back(a[0]);
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1] != a[i])
                ans.push_back(a[i]);
        }
        
        if(ans.size() < 3)
            return ans[0];
        
        return ans[2];
    }
};