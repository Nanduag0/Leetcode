class Solution {
public:
    int compareVersion(string v1, string v2)
    {
        int v1_val = 0, v2_val = 0;
        
        for(int i=0,j=0; (i<v1.size())||(j<v2.size());)
        {
            while(i<v1.size() && v1[i]!='.')
            {
                v1_val = v1_val*10 + (v1[i]-'0');
                i++;
            }
            
            while(j<v2.size() && v2[j]!='.')
            {
                v2_val = v2_val*10 + (v2[j]-'0');
                j++;
            }
            
            if(v1_val > v2_val)
                return 1;
            else if(v1_val < v2_val)
                return -1;
            
            v1_val = v2_val = 0;
            i++, j++;
        }
        
        return 0;
    }
};