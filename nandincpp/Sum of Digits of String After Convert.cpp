class Solution {
    int fun(int x)
    {
        int sum = 0;
        
        while(x)
        {
            sum += x%10;
            x /= 10;
        }
        return sum;
    }
    
public:
    int getLucky(string s, int k) 
    {
        string temp = "";
        for(int i=0;i<s.size();i++)
            temp += to_string(s[i]-'a'+1);
        
        int num = 0;
        for(int i=0;i<temp.size();i++)
            num += (temp[i]-'0');
        int ans;
        
        k--;
        while(k--)
        {
            ans = fun(num);
            num = ans;
        }
        
        return ans;
    }
};