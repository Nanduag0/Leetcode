class Solution {
public:
    int maximumSwap(int num) 
    {
        string s = to_string(num);
        vector<int> pos(10);
        
        for(int i=0;i<s.size();i++)
            pos[s[i] - '0'] = i;
        
        for(int i=0;i<s.size();i++)
        {
            for(int d=9;d>s[i]-'0';d--)
            {
                if(pos[d] > i)
                {
                    char t = (char)(d+'0');
                    swap(s[i], s[pos[d]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};