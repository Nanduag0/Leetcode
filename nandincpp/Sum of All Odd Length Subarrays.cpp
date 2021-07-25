class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& a)
    {
        int n = a.size();
        vector<int> prefix(n);
        prefix[0] = a[0];
        int ans = 0;
        
        for(int i=1;i<a.size();i++)
            prefix[i] += prefix[i-1] + a[i];
        
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<a.size();j++)
            {
                if((j-i+1)%2 == 1)
                {
                    if(i == 0)
                        ans += prefix[j];
                    else 
                        ans += (prefix[j] - prefix[i-1]);
                }
            }
        }
        
        int sum = 0;
        for(auto i : a)
            sum += i;
        
        return ans+sum;
    }
};