class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int n = citations.size();
        vector<int> bucket(n+1);
        sort(citations.begin(), citations.end());
        
        for(auto i : citations)
        {
            if(i >= n)
                bucket[n]++;
            else
                bucket[i]++;
        }
        
        int ans, cnt = 0;
        for(int i=n;i>=0;i--)
        {
            cnt += bucket[i];
            if(cnt >= i)
            {
                ans = i;
                break;
            }
        }
        
        return ans;
    }
};