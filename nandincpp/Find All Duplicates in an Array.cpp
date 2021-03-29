class Solution {
    vector<int> ans;
    
public:
    vector<int> findDuplicates(vector<int>& a) 
    {
        for(int i=0;i<a.size();i++)
        {
            int xx = abs(a[i]);
            
            if(a[xx-1] < 0)
                ans.push_back(xx);
            else
                a[xx-1] *= -1;
        }
        return ans;
    }
};