class Solution {
public:
    string sortSentence(string str) 
    {
        stringstream s(str);
        string word;
        vector<string> v;
        
        while(s >> word)
            v.push_back(word);
        
        vector<string> ans(v.size()+1);
        for(int i=0;i<v.size();i++)
        {
            int x = v[i].size()-1;
            char y = v[i][x];
           // int g = (int)(y);
            
            ans[(y-'0')-1] = v[i];
        }
        
        string res = "";
        for(int i=0;i<ans.size();i++)
        {
            res = res + ans[i];
            res.pop_back();
            res = res + ' ';
        }
        res.pop_back();
        
        return res;
    }
};