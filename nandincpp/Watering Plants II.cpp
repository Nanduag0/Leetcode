class Solution {
public:
    int minimumRefill(vector<int>& p, int capa, int capb) 
    {
        int ans = 0, n = p.size();
        int i = 0, j = n-1;
        int ca = capa, cb = capb;
        
        while(i <= j)
        {
            if(i == j)
            {
                if(ca >= cb)
                {
                    ans += (ca < p[i]);
                }
                else
                {
                    ans += (cb < p[i]);
                }
                
                break;
            }
            
            else
            {
                if(ca < p[i])
                {
                    ans++;
                    ca = capa;
                }
                if(cb < p[j])
                {
                    ans++;
                    cb = capb;
                }
                
                ca -= p[i];
                cb -= p[j];
            }
            
            i++, j--;
        }
        
        return ans;
    }
};