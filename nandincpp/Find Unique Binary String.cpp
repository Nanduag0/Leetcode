class Solution {
    string decToBinary(int n)
    {
        string ans = "";
        for (int i = 31; i >= 0; i--)
            {
            int k = n >> i;
            if (k & 1)
                ans += '1';
            else
                ans += '0';
            }
        
        return ans;
    }
    
public:
    string findDifferentBinaryString(vector<string>& a) 
    {
        unordered_set<string> s(a.begin(), a.end());
        
        int N = a[0].size();
        int n = 1 << N;
        
        for(int i=0;i<n;i++)
        {
            int X = i ^ (i>>1);
            
            string x = decToBinary(X);
            x = x.substr(32-N, 32);
            
            if(s.count(x))
                continue;
            else
                return x;
        }
        
        return "";
    }
};