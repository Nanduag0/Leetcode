class WordFilter {
public:
    unordered_map<string, int> mapi;
    WordFilter(vector<string>& words)
    {
    
        for(int k=0; k < words.size(); k++) 
        {
            string word = words[k];
            
            for(int i=0; i <= word.size(); i++)
            {
                string prefix = word.substr(0, i);
                
                for(int j=0; j < word.size(); j++)
                {
                    string suffix = word.substr(j, (int)word.size());
                    string ps = prefix + '*' + suffix;
                   
                    mapi[ps] = k;
                }
            }
        }
    }
    
    int f(string prefix, string suffix)
    {
        string ps = prefix + '*' +  suffix;
        return mapi[ps];
    }
};


/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */