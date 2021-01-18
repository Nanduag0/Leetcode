class Solution {
public:
    int maxOperations(vector<int>& a, int sum)
    {
        sort(a.begin(), a.end());
        
        int n = a.size();
        int i = 0, j = n-1, c = 0;
        
        while(i < j)
        {
            if(a[i]+a[j] == sum)
            {
                c++;
                i++, j--;
            }
            
            else if(a[i]+a[j] < sum)
                i++;
            
            else 
                j--;
        }
        
        return c;
        
    }
};