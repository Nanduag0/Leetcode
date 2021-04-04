class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        vector<string> v;
        
        stringstream ss(s);
        string word;
        while(ss >> word)
            v.push_back(word);
        
        int x = v.size();
        string ans = "";
        
        for(int i=0;i<min(x,k);i++)
        {
            ans += v[i];
            ans += ' ';
        }
        
        ans.pop_back();
        return ans;
            
    }
};