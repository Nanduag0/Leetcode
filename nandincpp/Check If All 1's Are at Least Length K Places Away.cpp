class Solution {
public:
    bool kLengthApart(vector<int>& a, int k)
    {
        int n = a.size();
        int prev = -100005;
        int now;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] == 1)
            {
                if((i-prev) <= k)
                {
                    return false;
                }
                prev = i;
            }
        }
        return true;
    }
};