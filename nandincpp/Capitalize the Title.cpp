class Solution {
public:
    string capitalizeTitle(string title)
    {
        stringstream ss(title);
        string temp;
        vector<string> v;
        
        while(getline(ss, temp, ' '))
            v.push_back(temp);
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].size() < 3)
            {
                for(int j=0;j<v[i].size();j++)
                {
                    if(v[i][j]>='A' && v[i][j]<='Z')
                        v[i][j] = v[i][j] | ' ';
                }
                continue;
            }
            
            else
            {
                if(v[i][0]>='a' && v[i][0]<='z')
                    v[i][0] = v[i][0] & '_';
                
                for(int j=1;j<v[i].size();j++)
                {
                    if(v[i][j]>='A' && v[i][j]<='Z')
                        v[i][j] = v[i][j] | ' ';
                }
            }
        }
        
        string ans = "";
        for(int i=0;i<v.size();i++)
        {
            ans += v[i];
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};