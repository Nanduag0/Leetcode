class Solution {
public:
    int singleNumber(vector<int>& a)
    {
        int res = 0;
        int n = a.size();
        
        for(int bit=0;bit<32;bit++)
        {
            int set = 1<<bit;
            int sum = 0;
            
            for(int i=0;i<n;i++)
            {
               // sum += (set&a[i]);
                if(set & a[i])
                    sum++;
            }
            
            if(sum%3 != 0)
            res |= set;
        }
        
        return res;
    }
};