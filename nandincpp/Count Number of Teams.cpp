class Solution {
public:
    int numTeams(vector<int>& rating) 
    {
        int total = 0, n = rating.size();
        
        for(int i=1;i<n-1;i++)
        {
            int a1,a2,b1,b2;
            
            a1 = a2 = b1 = b2 = 0;
            
            for(int j=0;j<n;j++)
            {
                if(i < j)
                {
                    if(rating[j] > rating[i])
                        a1++;
                    else
                        a2++;
                }
                
                if(i > j)
                {
                    if(rating[i] > rating[j])
                        b1++;
                    else
                        b2++;
                }
            }
            
            total += (a1*b1);
            total += (a2*b2);
        }
        return total;
    }
};