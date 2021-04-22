class Solution {
public:
    bool checkIfPangram(string s) 
    {
        bitset<26> b;
        
        for(auto i : s)
        {
            b[i-'a'] = 1;
        }
        
        for(int i=0;i<26;i++)
            if(b[i] == 0)
                return 0;
        
        return 1;
    }
};