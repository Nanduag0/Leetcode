class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) 
    {
        sort(a.begin(), a.end());
        
        vector<vector<int>> ans;
        
        int n = a.size();
        
        if(n < 3)
            return {};
        
        for(int i=0;i<n-1;i++)
        {
            int j = i+1, k = n-1, target = -a[i];
            if(i>0 && a[i]==a[i-1])
                continue;
            
            while(j < k)
            {
                if(a[j]+a[k] == target)
                {
                    ans.push_back({a[i], a[j], a[k]});
                    while(j<k && a[j]==a[j+1])
                        j++;
                    while(j<k && a[k]==a[k-1])
                        k--;
                    
                    j++, k--;
                }
                
                else if(a[j]+a[k] > target)
                    k--;
                else
                    j++;
            }
        }
        
        return ans;
    }
};