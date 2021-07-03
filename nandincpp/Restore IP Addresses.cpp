class Solution {
    bool check(string s)
    {
        if(s.size()<0 || s.size()>3)
            return 0;
        if(s.size()==2 || s.size()==3)
        {
            if(s[0] == '0')
                return 0;
        }
        
        int num = stoi(s);
        if(num>255)
            return 0;
        
        return 1;
    }
    
public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> ans;
        int n = s.size();
        
        if(n<3 || n>12)
            return {};
        
        for(int i=1;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    string a = s.substr(0, i);
                    string b = s.substr(i, j-i);
                    string c = s.substr(j, k-j);
                    string d = s.substr(k, n-k);
                    
                    if(check(a) && check(b) && check(c) && check(d))
                    {
                        string temp = a + '.' + b + '.' + c + '.' + d;
                        ans.push_back(temp);
                    }
                }
            }
        }
        
        return ans;
    }
};