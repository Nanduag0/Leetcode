class Solution {
public:
    bool buddyStrings(string a, string b)
    {
               
        if(a.size() != b.size())
            return 0;
        
        if (a == b)
            return (set<char>(a.begin(), a.end()).size() < a.size()); 
        
        int diff = 0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i] != b[i])
                diff++;
        }
        
        if(diff > 2)
            return 0;
        
        vector<int> ca(26, 0), cb(26, 0);
        for(int i=0;i<a.size();i++)
        {
            ca[a[i] - 'a']++;
            cb[b[i] - 'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(ca[i] != cb[i])
                return 0;
        }
        
        return 1;
    }
};