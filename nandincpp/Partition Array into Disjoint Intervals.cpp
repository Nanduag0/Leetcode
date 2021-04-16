class Solution {
public:
    int partitionDisjoint(vector<int>& a) 
    {
        int n = a.size();
        int max_so_far = a[0], x = a[0], ans = 1;
        
        for(int i=0;i<n;i++)
        {
            max_so_far = max(max_so_far, a[i]);
            
            if(a[i] < x)
            {
                x = max_so_far;
                ans = i+1;
            }
        }
        
        return ans;
    }
};