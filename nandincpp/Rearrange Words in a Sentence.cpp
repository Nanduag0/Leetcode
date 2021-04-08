class Solution {
public:
    string arrangeWords(string text) 
    {
        vector<string> word;
        text[0] = tolower(text[0]);
        
        stringstream s(text);
        string ss;
        string ans = "";
        
        while(s >> ss)
            word.push_back(ss);
        
        stable_sort(word.begin(), word.end(), [&](string a, string b)
                    {
                        return a.size() < b.size();
                    });
        
        for(int i=0;i<word.size();i++)
            {
            //cout<<word[i] <<" ";
                ans += word[i];
                ans += ' ';
            }
        
        ans.pop_back();
        ans[0] = toupper(ans[0]);
        
        return ans;
    }
};