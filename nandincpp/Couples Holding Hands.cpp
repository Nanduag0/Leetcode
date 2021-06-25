class Solution {
public:
    int minSwapsCouples(vector<int>& row)
    {
        int n = row.size();
        vector<int> pos(n);
        
        for(int i=0;i<n;i++)
            pos[row[i]] = i;
        
        int swaps = 0;
        for(int i=0;i<n;i+=2)
        {
            int me = row[i];
            
            int my_partner = (me&1) ? me-1 : me+1;
            
            if(my_partner != row[i+1])
            {
                swaps++;
                
                int my_neighbor = row[i+1];
                
                row[pos[my_partner]] = my_neighbor;
                pos[my_neighbor] = pos[my_partner];
                
                row[i+1] = my_partner;
            }
        }
        
        return swaps;
    }
};