class Solution {
    unordered_map<char, int> m;
    
    bool help(string& a, string& b)
    {
        int x = min(a.size(), b.size()), i = 0;
        
        while(i < x)
        {
            if(m[a[i]] < m[b[i]])
                return 1;
            else if(m[a[i]] > m[b[i]])
                return 0;  
            i++;
        }
        return a.size()<=b.size();
    }
    
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
       for(int i=0;i<order.size();i++)
           m[order[i]] = i;
        
        for(int i=0;i<words.size()-1;i++)
            if(!help(words[i], words[i+1]))
                return 0;
        
        return 1;
    }
};