class Solution {
public:
      int findRadius(vector<int>& ho, vector<int>& he)
      {
        sort(ho.begin(), ho.end());
        sort(he.begin(), he.end());
          
          int n = ho.size(), m = he.size();
        vector<int> res(n, INT_MAX); 
        
        //rhs
        for (int i = 0, j = 0; i <n && j <m; ) 
        {
            if (ho[i] <= he[j]) 
            { 
                res[i] = he[j] - ho[i];
                i++; 
            }
            else 
            j++;
        }
        
        //lhs
        for (int i =n-1, j = m-1; i >= 0 && j >= 0; ) 
        {
            if (ho[i] >= he[j]) 
            {
                res[i] = min(res[i], ho[i] - he[j]);
                i--;
            }
            else
                j--;
        }
       
        return *max_element(res.begin(), res.end());
    }
};