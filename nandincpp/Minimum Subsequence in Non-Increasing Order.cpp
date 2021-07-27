class Solution {
public:
    vector<int> minSubsequence(vector<int>& a) 
    {
        int n = a.size();
        if(n == 1)
            return a;
        
        int sum = 0;
        for(auto i : a)
            sum += i;
        
        int need = sum/2;
        
        sort(a.rbegin(), a.rend());
        vector<int> ans;
        int temp = 0;
        for(int i=0;i<n;i++)
        {
            temp += a[i];
            ans.push_back(a[i]);
            
            if(temp > need)
                break;
        }
        
        return ans;
    }
};