class Solution {
public:
    string kthDistinct(vector<string>& a, int k) 
    {
        unordered_map<string, int> mp;
        
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        
        for(int i=0;i<a.size();i++)
        {
            if(mp[a[i]] == 1)
                k--;
            
            if(k==0)
            {
                return a[i];
            }
        }
        
        return "";
    }
};