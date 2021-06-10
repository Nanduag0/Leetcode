class Solution {
public:
    bool canArrange(vector<int>& a, int k)
    {
        unordered_map<int, int> m;
        //int x = 0;
        
        for(int i=0;i<a.size();i++)
        {
            int temp = a[i]%k;
            if(temp < 0)
                temp += k;
                
            m[temp]++;
        }
        
        if(m[0] & 1)
            return 0;
        
        for(int i=1;i<k;i++)
            if(m[i] != m[k-i])
                return 0;
        
        return 1;
    }
};