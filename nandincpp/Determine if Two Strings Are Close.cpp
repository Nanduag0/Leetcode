class Solution {
public:
    bool closeStrings(string word1, string word2)
    {
        int n1 = word1.size(), n2 = word2.size();
        
        if(n1 != n2)
            return false;
        
        vector<int> freq1(26,0), freq2(26,0);
        set<char> s1, s2;
        
        for(auto i : word1)
        {
            s1.insert(i);
            freq1[i - 'a']++; 
        }
        for(auto i : word2)
        {
            s2.insert(i);
            freq2[i - 'a']++; 
        }
        
        if(s1 != s2)
            return false;
        
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());
        
        return freq1==freq2;
    }
};