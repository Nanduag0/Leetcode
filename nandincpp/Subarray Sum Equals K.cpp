class Solution {
public:
    int subarraySum(vector<int>& a, int k) 
    {
        unordered_map<int,int> m;
        int cnt = 0,sum = 0, n = a.size();
        
        
            for(int i=0;i<n;i++)
    {
		sum += a[i];
        if(sum == k)
            cnt++;
        
        

        if(m.find(sum-k) != m.end())
        {
            cnt += m[sum-k];
        }

        m[sum]++;
    }
return cnt;
        
    }
    
         
    
};