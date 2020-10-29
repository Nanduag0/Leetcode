class Solution {
public:
    int findMaxLength(vector<int>& a) 
    {
        for(int i=0;i<a.size();i++)
            if(a[i] == 0)
                a[i] = -1;
        
        map<int, int> m;
        int sum = 0, ans = 0;
        
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            
            if(sum == 0)
                ans = max(ans, i+1);
            
            else if(m.find(sum) != m.end())
            {
                if(ans < i-m[sum])
                    ans = i-m[sum];
            }
            
            else
                m[sum] = i;
        }
        
        return ans;
    }
};