class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) 
    {
        vector<int> v(101, 0);
        for(int i=0;i<a.size();i++)
        {
            v[a[i]]++;
        }
        
        for(int i=1;i<101;i++)
            v[i] += v[i-1];
        
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] == 0)
                ans.push_back(0);
            
            else
                ans.push_back(v[a[i]-1]);
        }        
        
        return ans;
    }
};