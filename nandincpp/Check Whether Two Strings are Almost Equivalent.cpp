class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) 
    {
        vector<int> f1(26, 0), f2(26, 0);
        for(auto i : word1)
            f1[i-'a']++;
        for(auto i : word2)
            f2[i-'a']++;
        
        for(int i=0;i<26;i++)
        {
            if(abs(f1[i]-f2[i]) > 3)
                return 0;
        }
        
        return 1;
    }
};