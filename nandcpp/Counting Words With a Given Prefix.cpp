class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int cnt = 0, size = pref.size();
        for(int i=0;i<words.size();i++)
        {
            string word = words[i];
            string temp = word.substr(0, size);
            
            if(temp == pref)
                cnt++;
        }
        
        return cnt;
    }
};