class Solution {
public:
    string maximumBinaryString(string s)
    {
        int i = 0;
        while(i<s.size() && s[i]=='1')
            i++;
        
        int o = 0, z = 0;
        for(int j=i;j<s.size();j++)
        {
            if(s[j] == '0')
                z++;
            else
                o++;
        }
        
        for(int j=i;j<s.size();j++)
        {
            if(z > 1)
            {
                s[j] = '1';
                z--;
            }
            
            else if(z == 1)
            {
                s[j] = '0';
                z--;
            }
            
            else
                s[j] = '1';
        }
        
        return s;
    }
};