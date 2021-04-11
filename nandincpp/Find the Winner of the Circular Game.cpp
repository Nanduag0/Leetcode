class Solution {
public:
    int findTheWinner(int n, int k) 
    {
        vector<int> v(n);
        
        for(int i=0;i<n;i++)
        {
            v[i] = i+1;
        }
        
        int lost, start = 0;
        while(v.size() > 1)
        {
            lost = (start + k - 1)%(v.size());
            v.erase(v.begin() + lost);
            
            start = lost;
        }
        
        return v[0];
    }
};