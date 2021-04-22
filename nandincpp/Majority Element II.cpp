class Solution {
public:
    vector<int> majorityElement(vector<int>& a) 
    {
        int n = a.size();
        
        if(n < 2)
            return {a[0]};
        
        int element1 = a[0];
        int element2 = a[1];
        int cnt1 = 0, cnt2 = 0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i] == element1)
                cnt1++;
            else if(a[i] == element2)
                cnt2++;
            
            else if(cnt1 == 0)
            {
                cnt1 = 1;
                element1 = a[i];
            }
            else if(cnt2 == 0)
            {
                cnt2 = 1;
                element2 = a[i];
            }
            
            else
                cnt1--, cnt2--;
        }
        
        cnt1 = cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == element1)
                cnt1++;
            if(a[i] == element2)
                cnt2++;
        }
        
        vector<int> ans;
        if(cnt1 > (n/3))
            ans.push_back(element1);
        if(cnt2 > (n/3))
            ans.push_back(element2);
        if(element1 == element2)
            ans.pop_back();
        
        return ans;
    }
};