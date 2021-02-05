class Solution {
public:
    string simplifyPath(string path)
    {
        vector<string> v;
            
        string token;
        stringstream ss(path);
        
        while(getline(ss, token, '/'))
        {
            if(token=="." || token=="")
                continue;
            else if(token=="..")
            {
                if(v.size() != 0)
                    v.pop_back();
            }
            else
                v.push_back(token);
        }
        
        string ans = "";
        for(int i=0;i<v.size();i++)
            ans += ("/" + v[i]);
        
        return !v.size() ? "/" : ans;
    }
};