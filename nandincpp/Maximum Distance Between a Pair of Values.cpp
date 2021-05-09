class Solution {
public:
    int maxDistance(vector<int>& a1, vector<int>& a2) 
    {
        int i = 0, j = 0;
        int ans = 0;
        
       while(i<a1.size() && j<a2.size())
       {
           if(a1[i] <= a2[j])
           {
               if(i <= j)
               {
                   ans = max(ans, j-i);
               }
               j++;
           }
           
           else
               i++;
       }
        
        return ans;
    }
};