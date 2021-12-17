class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time)
    {
        int n = security.size();
        vector<int> pref(n, 0), suff(n, 0);
        int cnt = 0;
        
        for(int i=1;i<n;i++)
        {
            if(security[i] <= security[i-1])
            {
                cnt++;
            }
            else
                cnt = 0;
            
            pref[i] = cnt;
        }
        
        cnt = 0;
        for(int i=n-2;i>=0;i--)
        {
            if(security[i] <= security[i+1])
                cnt++;
            else
                cnt = 0;
            
            suff[i] = cnt;
        }
        
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(pref[i]>=time && suff[i]>=time)
                ans.push_back(i);
        }
        
        return ans;
    }
};