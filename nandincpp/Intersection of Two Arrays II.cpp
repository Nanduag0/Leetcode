class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b)
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int i, j;
        i = j = 0;
        vector<int> ans;
        
        while(i<a.size() && j<b.size())
        {
            if(a[i] < b[j])
                i++;
            else if(a[i] == b[j])
            {
                ans.push_back(a[i]);
                i++, j++;
            }
            
            else if(b[j] < a[i])
                j++;
        }
        
        return ans;
    }
};