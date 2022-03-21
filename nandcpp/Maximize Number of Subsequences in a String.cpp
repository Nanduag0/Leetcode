class Solution {
public:
    long long maximumSubsequenceCount(string t, string p) 
    {
        long long cnt0 = 1, cnt1 = 1, res0 = 0, res1 = 0;
        for(int i=0,j=t.size()-1;i<t.size()&&j>=0;i++,j--)
        {
            if(t[i] == p[1])
                res0 += cnt0;
            if(t[j] == p[0])
                res1 += cnt1;
            cnt0 += (t[i]==p[0]);
            cnt1 += (t[j]==p[1]);
        }
        
        return max(res0, res1);
    }
};