class Solution {
public:
    int numJewelsInStones(string J, string S)
    {
        
        int ans = 0;
        for(int i=0;i<J.size();i++)
        {
            ans += count(S.begin(), S.end(), J[i]);
        }
        
        return ans;
    }
};