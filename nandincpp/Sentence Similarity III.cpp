class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) 
    {
        string temp;
        if(sentence2.size() > sentence1.size())
        {
            temp = sentence1;
            sentence1 = sentence2;
            sentence2 = temp;
        }
        
        vector<string> s1, s2;
        stringstream ss1(sentence1);
        string word;
         
        while(ss1 >> word)
            s1.push_back(word);
        
        stringstream ss2(sentence2);
        while(ss2 >> word)
            s2.push_back(word);
        
        int i1 = 0, i2 = 0, j1 = s1.size()-1, j2 = s2.size()-1;
        while(i2 <= j2)
        {
            if(s1[i1] == s2[i2])
                i1++, i2++;
            else if(s1[j1] == s2[j2])
                j1--, j2--;
            
            else
                return 0;
        }
        
        return 1;
    }
};