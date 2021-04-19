class Solution {
public:
    char findKthBit(int n, int k)
    {
        string s = "0";
        int cnt = 1;
        
        while(1)
        {
            if(cnt == n)
                return s[k-1];
            
            string ss = s;
            
            reverse(ss.begin(), ss.end());
            
            for(auto &i : ss)
                i = (i=='0') ? '1' : '0';
            
            s += "1"+ss;
            cnt++;
        }
        return 1;
    }
};