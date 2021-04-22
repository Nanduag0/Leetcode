class Solution {
public:
    string reverseWords(string s) 
    {
        int n = s.size();
        stringstream ss(s);
        string word;
        vector<string> v;
        
        while(ss >> word)
            v.push_back(word);
        
        for(int i=0;i<v.size();i++)
            reverse(v[i].begin(), v[i].end());
        
        string ans = "";
        
        for(int i=0;i<v.size();i++)
        {
            ans += v[i];
            ans += ' ';
        }
        ans.pop_back();
        
        return ans;
    }
};