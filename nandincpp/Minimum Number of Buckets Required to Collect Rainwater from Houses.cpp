class Solution {
public:
    int minimumBuckets(string street)
    {
        int ans = 0, n = street.size();
        
        for(int i=0;i<n;i++)
        {
            if(street[i] == 'H')
            {
                if(i-1>=0 && street[i-1]=='B')
                    continue;
                else if(i+1<n && street[i+1]=='.')
                {
                    ans++;
                    street[i+1] = 'B';
                }
                else if(i-1>=0 && street[i-1]=='.')
                {
                    ans++;
                    street[i-1] = 'B';
                }
                
                else
                    return -1;
            }
        }
        
        return ans;
    }
};