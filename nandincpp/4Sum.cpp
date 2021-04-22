class Solution {
    
public:
    vector<vector<int>> fourSum(vector<int>& a, int target)
    {
        int n = a.size();
        map<vector<int>, int> m;
        vector<vector<int>> v;
        
        if(n < 4)
            return v;
        
        sort(a.begin(), a.end());
        
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int k = j+1, l = n-1;
                
                while(k < l)
                {
                    if(a[i]+a[j]+a[k]+a[l] == target)
                    {
                        if(m[{a[i], a[j], a[k], a[l]}] == 0)
                        {
                            m[{a[i], a[j], a[k], a[l]}] = 1;
                            v.push_back({a[i], a[j], a[k], a[l]});
                        }
                        k++, l--;
                    }
                    
                    else if(a[i]+a[j]+a[k]+a[l] > target)
                        l--;
                    else
                        k++;
                }
            }
        }
        return v;
    }
};