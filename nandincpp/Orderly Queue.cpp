class Solution {
public:
    string orderlyQueue(string S, int K)
    {
        if(K > 1)
        {
            sort(S.begin(), S.end());
            return S;
        }
        
        string ans = S;
        for(int i=0;i<S.size();i++)
        {
            ans = min(ans, S.substr(i)+S.substr(0,i));
        }
        
        return ans;
    }
};