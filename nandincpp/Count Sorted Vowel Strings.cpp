class Solution {
    
    int count = 0;
    vector<int> word = {'a', 'e', 'i', 'o', 'u'};
    
    void helper(string &s, int n)
    {
        if(s.size() == n)
          count++;
        
        for(int i=0;i<=4;i++)
        {
            if(s.size() == 0)
        {
            s.push_back(word[i]);
            helper(s, n);
            s.pop_back();
        }
        
        else if(s.size()<n && s.back()<=word[i])
        {
            s.push_back(word[i]);
            helper(s, n);
            s.pop_back();
        }
        }
    }
public:
    int countVowelStrings(int n)
    {
        string s ;//= "";
        helper(s, n);
        return count;
    }
};