class Solution {
    bool check(string word, string pattern)
    {
        unordered_map <char, char> w2p, p2w;
        
        for(int i=0;i<word.size();i++)
        {
            if(p2w.count(pattern[i]) && p2w[pattern[i]]!=word[i])
                return 0;
            if(w2p.count(word[i]) && w2p[word[i]]!=pattern[i])
                return 0;
            
            else
            {
               p2w[pattern[i]] = word[i];
                w2p[word[i]] = pattern[i];
            }
        }
        return 1;
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern)
    {
        vector<string> ans;
        
        for(int i=0;i<words.size();i++)
        {
            if(check(words[i], pattern))
                ans.push_back(words[i]);
        }
        return ans;
    }
};