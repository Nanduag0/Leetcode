class Solution {
    const int mod = 1e9 + 7;
public:
    int rangeSum(vector<int>& a, int n, int left, int right)
    {
        //int n = a.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int sum = 0;
            for(int j=i;j<n;j++)
            {
                sum += a[j];
                v.push_back(sum);
            }
        }
        
        sort(v.begin(), v.end());
        long long res = 0;
        
        left--;
        while(left < right)
        {
            res += v[left++];
            res %= mod;
        }
        
        
        return res;
    }
};