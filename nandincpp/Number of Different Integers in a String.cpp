class Solution {
public:
    int numDifferentIntegers(string word) 
    {
       // string temp = "";
        unordered_set<string> s;
        
        for(int i=0;i<word.size();i++)
        {
            if(isdigit(word[i]))
            {
                string temp = "";
                
                while(word[i] == '0')
                    i++;
                while(isdigit(word[i]))
                    temp += word[i++];
                
                s.insert(temp);
            }
        }
        
        return s.size();
    }
};