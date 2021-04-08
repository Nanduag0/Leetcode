class Solution {
    int count = 0;
    const int mod = 1e9 + 7;
    
    int rev(int num)
    {
        int rev_num = 0;
        while (num > 0)
        {
            rev_num = rev_num*10 + num%10;
            num = num/10;
        }
        return rev_num;
    }
    
public:
    int countNicePairs(vector<int>& a)
    {
        unordered_map<int, int> m;
        for(int i=0;i<a.size();i++)
        {
            int now = a[i] - rev(a[i]);
           // cout<<now<<endl;
            
            if(m.count(now))
            {
                int x = m[now];
                count += x;
                count %= mod;
            }
            
            m[now]++;
        }
        return count;
    }
};