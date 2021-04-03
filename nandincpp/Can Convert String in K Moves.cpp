class Solution {
public:
    bool canConvertString(string s, string t, int k) 
    {
        if(s.size() != t.size())
            return 0;
        
        int n = s.size();
        map<int, int> m;
        
        for(int i=0;i<n;i++)
        {            
            if(s[i] != t[i])
            {
                int shift = (t[i]-s[i]+26)%26;
                if(k < shift)
                    return 0;
            
                 if(m.count(shift))
                 {
                     m[shift] += 26;
                     if(m[shift] > k)
                         return 0;
                 }
                
                else
                 m[shift] = shift;
                 //cout<<shift<<endl;
            }
        }
        return 1;
    }
};