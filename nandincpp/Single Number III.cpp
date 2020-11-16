

class Solution {
public:
    vector<int> singleNumber(vector<int>& a) 
    {
        
        int xxor = 0;
        for(int i=0;i<a.size();i++){
            xxor ^= a[i];
        }
  
        int mask = xxor & (-xxor);
        
        vector<int> ans(2);
        
        for(int i=0;i<a.size();i++)
        {
            if(mask & a[i])
                ans[1] ^= a[i];
            
            else
                ans[0] ^= a[i];
        }
        
        return ans;
    }
};