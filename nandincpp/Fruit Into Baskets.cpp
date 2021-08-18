class Solution {
public:
    int totalFruit(vector<int>& a)
    {
        int ans = 0, n = a.size();
        int start = 0;
        unordered_map<int , int> m;
        
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            
            while(m.size()>2 && i<n)
            {
                m[a[start]]--;
                
                if(m[a[start]] == 0)
                    m.erase(a[start]);
                
                start++;
            }
            
            ans = max(ans, i-start+1);
        }
        
        return ans;
    }
};