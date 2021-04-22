class Solution {
    map<int, int> m;
    
    int is_sum(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    
public:
    int countBalls(int low, int high)
    {
        for(int i=low;i<=high;i++)
        {
            int x = i;
            x = is_sum(x);
            
            m[x]++;
        }
        
        int ans = 0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            ans = max(ans, i->second);
        }
        return ans;
    }
};