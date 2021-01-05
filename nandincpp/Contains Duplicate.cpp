class Solution {
public:
    bool containsDuplicate(vector<int>& a) 
    {
        sort(a.begin(), a.end());
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i-1] == a[i])
                return true;
        }
        
        return false;
    }
};