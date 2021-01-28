class Solution {
public:
    string getSmallestString(int n, int k)
    {
        string ans = "";
        for(int i=n-1;i>=0;i--)
        {
            int val_now = min(26, k-i);
            ans += (char)('a' + val_now - 1);
            k -= val_now;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};