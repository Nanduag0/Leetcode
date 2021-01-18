class Solution {
public:
    int minOperations(vector<int>& a, int x)
    {
        int n = a.size();
        int sum = 0;
        map<int, int> m;
        
        for(int i=0;i<n;i++)
        {
            sum += a[i];
            m[sum] = i;
        }
        
        if(sum < x)
            return -1;
        
        int length = 0, i_have = 0;
        sum = sum-x;
        m[0] = 0;
        
        for(int i=0;i<n;i++)
        {
            i_have += a[i];
            
            if(m.count(i_have-sum))
            {
                if(i_have == sum)
                    length = max(length, i-m[i_have-sum]+1);
                else
                    length = max(length, i-m[i_have-sum]);
            }
        }
        
        return length==0 ? (sum==0 ? n : -1) : n-length;
    }
};